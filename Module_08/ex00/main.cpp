#include "easyfind.hpp"

int main() {
    {
        std::vector<int> myVector;
        myVector.reserve(20);
        for (size_t i = 0; i < myVector.capacity(); ++i) {
            myVector.push_back(i);
        }
        std::vector<int>::iterator it;
        try {
            it = easyfind(myVector, 10);
            std::cout << *it << std::endl;
            std::cout << "Found!" << std::endl;
        }
        catch (std::exception &ex) {
            std::cout << ex.what() << std::endl;
        }
    }
    {
        std::list<int> myVector;
        for (size_t i = 0; i < 10; ++i) {
            myVector.push_back(i);
        }
        std::list<int>::iterator it;
        try {
            it = easyfind(myVector, 8);
            std::cout << *it << std::endl;
            std::cout << "Found!" << std::endl;
        }
        catch (std::exception &ex) {
            std::cout << ex.what() << std::endl;
        }
    }
    return 0;
}
