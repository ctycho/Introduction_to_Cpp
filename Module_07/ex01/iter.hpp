//
// Created by Cavalo Tycho on 6/23/21.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

#include <iostream>

namespace my_std {
    template <typename T>
    void print(const T x) {
        std::cout << x << std::endl;
    }
    template <typename T>
    void iter(T *arr, int len, void (func)(const T &el)) {
        for (int i = 0; i < len; ++i)
            func(arr[i]);
    }
}

#endif //EX01_ITER_H
