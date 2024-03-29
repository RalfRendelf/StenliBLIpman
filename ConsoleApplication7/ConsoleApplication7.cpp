﻿

#include <iostream>
#include<array>
#include<vector>
#include "XY.h"
#include <iostream>
#include <bitset>
#include <bit>
#include <cassert>
#include <stdexcept>
using namespace std;
int main()
{
    std::bitset<10> b1("1111110000");

    std::size_t idx = 0;
    while (idx < b1.size() && !b1.test(idx)) {
        ++idx;
    }

    assert(static_cast<int>(idx) == std::countr_zero(b1.to_ulong()));

    if (idx < b1.size()) {
        std::cout << "first set bit at index " << idx << '\n';
    }
    else {
        std::cout << "no set bits\n";
    }

    try {
        if (b1.test(b1.size()))
            std::cout << "Expect unexpected!\n";
    }
    catch (std::out_of_range const& ex) {
        std::cout << "Exception: " << ex.what() << '\n';
    }
}