#include <vector>
#include <string>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <execution>
#include <functional>
#include <utility>
#include "input.h"

template<typename b_t>
bool check_win(const b_t& board)
{
    //check rows
    for(const auto& row : board)
    {
        const bool row_win {std::all_of(
            std::execution::par_unseq,
            row.cbegin(),
            row.cend(),
            [](const auto& element){return element == -1;}
            )};
        if(row_win)
            return true;
    }

    //check columns
    for(unsigned col_idx{0}; col_idx < board.size(); ++col_idx)
    {
        const bool col_win{std::transform_reduce(
            std::execution::par_unseq,
            board.cbegin(),
            board.cend(),
            true,
            std::logical_and<>(),
            [&col_idx](const auto& row){return row.at(col_idx) == -1;}
        )};
        if (col_win)
            return true;
    }

    return false;
}

template<typename b_t>
void play_board(b_t& board, const int& number)
{
    for(auto& row : board)
        std::replace_if(
        row.begin(),
        row.end(),
        [&number](const auto& board_value){return board_value == number;},
        -1);
}

template<typename b_t>
int get_sum_without_minuses(const b_t& board)
{
    int sum{0};
    for (const auto& row : board)
    {
        sum += std::transform_reduce(
            std::execution::par_unseq,
            row.cbegin(),
            row.cend(),
            0,
            std::plus<>(),
            [](const auto& n){return n == -1 ? 0 : n;}
        );
    }
    return sum;
}

int part1()
{
    auto boards {aoc4::matrices};

    for(const auto& number : aoc4::input_numbers)
    {
        for(auto& board : boards)
        {
            play_board(board, number);
            if(check_win(board))
                return get_sum_without_minuses(board) * number;
        }
    }
    return -1; //fail
}

int part2()
{
    using board_t = std::vector<std::vector<int>>;
    auto boards {aoc4::matrices};
    std::pair<board_t,int> last_board_to_win;

    for(const auto& number : aoc4::input_numbers)
    {
        std::vector<board_t> boards_to_delete;
        for(auto& board : boards)
        {
            play_board(board, number);
            if(check_win(board))
            {
                last_board_to_win = std::make_pair(board, number);
                boards_to_delete.push_back(board);
            }
        }
        for(auto& board_to_delete : boards_to_delete)
            boards.erase(std::remove(boards.begin(), boards.end(), board_to_delete), boards.end());
    }
    return get_sum_without_minuses(last_board_to_win.first) * last_board_to_win.second;
}

int main()
{
    std::cout << "part 1 solution: " << part1() << '\n';
    std::cout << "part 2 solution: " << part2() << '\n';
}
