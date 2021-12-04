#include <vector>
#include <iostream>
#include <utility>
#include <bitset>
#include <numeric>
#include <functional>
#include <algorithm>
#include "input.h"

enum class Rating
{
    CO2 = 0,
    Oxygen = 1
};

template<typename v_t>
auto get_most_used_bit(const v_t& bitset, const int bit) -> bool
{
    const auto num_ones{std::transform_reduce(bitset.cbegin()
                                , bitset.cend()
                                , 0
                                , std::plus<>()
                                , [bit](auto set){return static_cast<int>(set[bit]);})};
    const auto num_zeros{bitset.size() - num_ones};
    return num_ones >= num_zeros;
}

template<typename v_t>
auto part1(const v_t& binary_input) -> int
{
    typename v_t::value_type gamma;

    for(unsigned bit{0}; bit < binary_input[0].size(); ++bit)
    {
        const auto bit_to_set {get_most_used_bit(binary_input, bit)};
        gamma[bit] = bit_to_set;
    }

    auto epsilon{gamma};
    epsilon.flip();

    return gamma.to_ulong() * epsilon.to_ulong();
}

template<typename v_t>
auto part2(const v_t& input, const unsigned& bit_to_check, const Rating& mode) -> v_t
{
    if(input.size() == 2)
    {
        v_t return_vector;
        std::copy_if(input.cbegin()
                    , input.cend()
                    , std::back_inserter(return_vector)
                    , [bit_to_check, mode](auto word){return word[bit_to_check] == bool(mode);});

        return return_vector;
    }

    //fallthrough
    const int target_bit {get_most_used_bit(input, bit_to_check)};

    v_t return_vector;
    std::copy_if(input.cbegin()
                , input.cend()
                , std::back_inserter(return_vector)
                , [target_bit, bit_to_check, mode](auto word){return (word[bit_to_check] == target_bit) == bool(mode);});

    return part2(return_vector, bit_to_check - 1, mode);
}

int main()
{
    std::cout << "Part 1: " << part1(advent03::input) << "\n";

    auto oxygen_rating{part2(advent03::input, advent03::input[0].size() - 1, Rating::Oxygen)};
    auto co2_rating{part2(advent03::input, advent03::input[0].size() - 1, Rating::CO2)};

    std::cout << "Part 2: " << oxygen_rating[0].to_ulong() * co2_rating[0].to_ulong() << "\n";
}
