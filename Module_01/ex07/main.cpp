#include "Replace.hpp"

int main(int ac, char **av) {
    if (ac != 4) {
        std::cout << "Wrong number of arguements!" << std::endl;
    }
    else {
        Replace swap;

        swap.main_proccess(av[1], av[2], av[3]);
    }
    return 0;
}
