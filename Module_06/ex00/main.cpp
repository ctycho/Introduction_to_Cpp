#include "Converter.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        Converter s(av[1]);
        s.action();
    }
    else
        std::cout << "Wrong number of arguements!" << std::endl;
    return 0;
}
