#include "iter.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    {
        std::cout << "int__________" << std::endl;
        int tab[] = {0, 1, 2, 3, 4, 5};
        my_std::iter(tab, 3, my_std::print);
    }
    {
        std::cout << "string_________" << std::endl;
        std::string array[5] = {"123", "lol", "qwe", "jajaja", "vxcz"};
        my_std::iter(array, 5, my_std::print);
    }
    {
        std::cout << "double_________" << std::endl;
        double array[] = {4.6, 45.1, 7.8, 6.4, 9.2};
        my_std::iter(array, 5, my_std::print);
    }
    return 0;
}
