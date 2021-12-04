#include <numeric>
#include <iostream>
#include <functional>
#include "input.h"

template<typename v_t>
auto sonar_sweep(const v_t& scan_results, const int window_size = 1) -> int
{
    return std::transform_reduce(
        scan_results.cbegin() + window_size,
        scan_results.cend(),
        scan_results.cbegin(),
        0,
        std::plus<>(),
        [](int a, int b){return b < a ? 1 : 0;}
    );
}

int main()
{
    std::cout << sonar_sweep(advent::input) << std::endl; //part 1
    std::cout << sonar_sweep(advent::input, 3) << std::endl; //part 2
}
