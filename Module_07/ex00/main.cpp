#include "whatever.hpp"

int main() {
    {
        int a = 2;
        int b = 3;
        my_std::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << my_std::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << my_std::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        my_std::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << my_std::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << my_std::max( c, d ) << std::endl;
    }
    {
        std::cout << "int: " << std::endl;
        int a = 3;
        int b = 9;
        my_std::swap(a, b);
        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "min: " << my_std::min(a, b) << std::endl;
        std::cout << "max: " << my_std::max(a, b) << std::endl;
    }
    {
        std::cout << "string: " << std::endl;
        std::string a = "hello";
        std::string b = "dumb";
        my_std::swap(a, b);
        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "min: " << my_std::min(a, b) << std::endl;
        std::cout << "max: " << my_std::max(a, b) << std::endl;
    }
    {
        std::cout << "double: " << std::endl;
        double a = 2.3;
        double b = 4.9;
        my_std::swap(a, b);
        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "min: " << my_std::min(a, b) << std::endl;
        std::cout << "max: " << my_std::max(a, b) << std::endl;
    }
    return 0;
}
