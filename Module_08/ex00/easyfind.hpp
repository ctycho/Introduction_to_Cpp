//
// Created by Cavalo Tycho on 6/23/21.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <algorithm>    // std::find
#include <vector>
#include <iostream>
#include <exception>
#include <list>

template <typename T>
typename T::iterator easyfind(T &arr, int n) {
    typename T::iterator p;
    p = std::find(arr.begin(), arr.end(), n);
    if (p == arr.end())
        throw std::runtime_error("Not found");
    else
        return p;
}

#endif //EX00_EASYFIND_HPP
