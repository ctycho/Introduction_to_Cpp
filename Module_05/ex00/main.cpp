
#include "Bureaucrat.hpp"


int main() {
    try {
        Bureaucrat jim("Jim", 112);
        std::cout << jim;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Bureaucrat john("John", 1);
        std::cout << john;
        john.increase();
        std::cout << john;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Bureaucrat dave("Dave", 150);
        std::cout << dave;
        dave.decrease();
        std::cout << dave;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
