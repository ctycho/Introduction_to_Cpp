
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

namespace my_std {
    template <typename T>
    const T   &min(const T &a, const T &b) {
        return (a < b ? a : b);
    }

    template <typename T1>
    const T1   &max(const T1 &a, const T1 &b) {
        return (a > b ? a : b);
    }

    template <typename T2>
    void   swap(T2 &a, T2 &b) {
        T2 tmp = a;
        a = b;
        b = tmp;
    }
}

#endif
