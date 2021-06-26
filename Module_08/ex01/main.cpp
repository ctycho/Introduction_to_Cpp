#include "span.hpp"

void main_test() {
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main() {
    srand(time(0));
    main_test();
    {
        try {
            Span sp = Span(501);

            for (size_t i = 0; i < 500; ++i) {
                sp.addNumber(rand() % 500);
            }
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception &ex) {
            std::cout << ex.what() << std::endl;
        }
    }
    return 0;
}
