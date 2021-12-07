#include "input.h"
#include <iostream>
#include <numeric>
#include <functional>
#include <ranges>
#include <algorithm>

namespace rs = std::ranges;

void draw_vertical_line(const auto& c, auto& board)
{
    std::transform(
    board.begin() + std::min(c.first.y, c.second.y),
    board.begin() + std::max(c.first.y, c.second.y) + 1,
    board.begin() + std::min(c.first.y, c.second.y),
    [x = c.first.x](auto& y){y[x] += 1; return y;});
}

void draw_horizontal_line(const auto& c, auto& board)
{
    std::transform(
    board[c.first.y].begin() + std::min(c.first.x, c.second.x),
    board[c.first.y].begin() + std::max(c.first.x, c.second.x) + 1,
    board[c.first.y].begin() + std::min(c.first.x, c.second.x),
    [](auto item){return item + 1;}
    );
}

void draw_diagonal_line(const auto& c, auto& board)
{
    const auto x_sign {c.first.x < c.second.x ? 1 : -1};
    const auto y_sign {c.first.y < c.second.y ? 1 : -1};

    auto x{c.first.x};
    const auto final_x{c.second.x + x_sign};
    auto y{c.first.y};

    while(x != final_x)
    {
        board[y][x] += 1;

        x += x_sign;
        y += y_sign;
    }
}

void part_1_and_2(const auto& coordinates, auto& board, bool part2)
{
    for(const auto& c : coordinates)
    {
        if(c.first.x == c.second.x)
            draw_vertical_line(c, board);
        else if(c.first.y == c.second.y)
            draw_horizontal_line(c, board);
        else
            if(part2)
                draw_diagonal_line(c, board);
    }
}

constexpr int get_max_x_value(const auto& list_of_coordinates)
{
    return std::transform_reduce(
    list_of_coordinates.cbegin(),
    list_of_coordinates.cend(),
    0,
    [](auto lhs, auto rhs){return std::max(lhs, rhs);},
    [](auto pair){return std::max(pair.first.x, pair.second.x);}
    );
}

constexpr int get_max_y_value(const auto& list_of_coordinates)
{
    return std::transform_reduce(
    list_of_coordinates.cbegin(),
    list_of_coordinates.cend(),
    0,
    [](auto lhs, auto rhs){return std::max(lhs, rhs);},
    [](auto pair){return std::max(pair.first.y, pair.second.y);}
    );
}

int get_num_overlaps(const auto& matrix)
{
    int num_overlaps{0};
    for(const auto& row : matrix)
        num_overlaps += std::transform_reduce(
                                            row.cbegin(),
                                            row.cend(),
                                            0,
                                            std::plus<>(),
                                            [](auto x){return x > 1 ? 1 : 0;}
                                            );
    return num_overlaps;
}

int main()
{
    std::array<std::array<int, get_max_x_value(aoc5::input) + 1>, get_max_y_value(aoc5::input) + 1> matrix;
    for(auto& row : matrix)
        rs::fill(row, 0);
    part_1_and_2(aoc5::input, matrix, true);
    std::cout << get_num_overlaps(matrix) << '\n';
}
