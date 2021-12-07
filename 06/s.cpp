#include <algorithm>
#include <numeric>
#include <functional>
#include <iostream>
#include <vector>
#include <array>
#include <ranges>

namespace rs = std::ranges;
namespace views =  std::ranges::views;

auto counting_fish(auto init, int num_days)
{
    std::vector<unsigned long long> fishes (9, 0);
    rs::for_each(init, [&fishes](auto i){fishes[i] += 1;});

    for (int day{0}; day < num_days; ++day)
    {
        const auto new_fish{fishes[0]};
        std::shift_left(fishes.begin(), fishes.end(), 1);
        fishes[9 - 1] = new_fish;

        fishes[6] += new_fish;
    }
    return std::reduce(fishes.cbegin(), fishes.cend());
}

int main()
{
    std::vector test_input {3,4,3,1,2};
    std::vector<int> real_input{1,2,1,3,2,1,1,5,1,4,1,2,1,4,3,3,5,1,1,3,5,3,4,5,5,4,3,1,1,4,3,1,5,2,5,2,4,1,1,1,1,1,1,1,4,1,4,4,4,1,4,4,1,4,2,1,1,1,1,3,5,4,3,3,5,4,1,3,1,1,2,1,1,1,4,1,2,5,2,3,1,1,1,2,1,5,1,1,1,4,4,4,1,5,1,2,3,2,2,2,1,1,4,3,1,4,4,2,1,1,5,1,1,1,3,1,2,1,1,1,1,4,5,5,2,3,4,2,1,1,1,2,1,1,5,5,3,5,4,3,1,3,1,1,5,1,1,4,2,1,3,1,1,4,3,1,5,1,1,3,4,2,2,1,1,2,1,1,2,1,3,2,3,1,4,5,1,1,4,3,3,1,1,2,2,1,5,2,1,3,4,5,4,5,5,4,3,1,5,1,1,1,4,4,3,2,5,2,1,4,3,5,1,3,5,1,3,3,1,1,1,2,5,3,1,1,3,1,1,1,2,1,5,1,5,1,3,1,1,5,4,3,3,2,2,1,1,3,4,1,1,1,1,4,1,3,1,5,1,1,3,1,1,1,1,2,2,4,4,4,1,2,5,5,2,2,4,1,1,4,2,1,1,5,1,5,3,5,4,5,3,1,1,1,2,3,1,2,1,1};
    std::cout << counting_fish(real_input, 256) << '\n';
}
