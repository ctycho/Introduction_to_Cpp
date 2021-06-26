#include "Array.hpp"

int main() {
    srand(time(0));
    {
        std::cout << "int_____________" << std::endl;
        Array<int> intArray(5);
        for (unsigned int i = 0; i < intArray.getN(); ++i)
            intArray[i] = rand() % intArray.getN();
        for (unsigned int i = 0; i < intArray.getN(); ++i) {
            try {
                std::cout << intArray[i] << " ";
            }
            catch (std::exception &ex) {
                std::cout << ex.what() << std::endl;
            }
        }
        std::cout << "" << std::endl;
    }
    {
        std::cout << "double_____________" << std::endl;
        Array<double> doubleArray(5);
        for (unsigned int i = 0; i < doubleArray.getN(); ++i)
            doubleArray[i] = static_cast<double>((rand() % doubleArray.getN())) + 0.5;
        for (unsigned int i = 0; i < doubleArray.getN(); ++i) {
            try {
                std::cout << doubleArray[i] << " ";
            }
            catch (std::exception &ex) {
                std::cout << ex.what() << std::endl;
            }
        }
        std::cout << "" << std::endl;
    }
    {
        std::cout << "string_____________" << std::endl;
        Array<std::string> strArray(5);
        strArray[0] = "boss";
        strArray[1] = "folk";
        strArray[2] = "mate";
        for (unsigned int i = 0; i < strArray.getN(); ++i) {
            try {
                std::cout << strArray[i] << " ";
            }
            catch (std::exception &ex) {
                std::cout << ex.what() << std::endl;
            }
        }
        std::cout << "" << std::endl;
        for (unsigned int i = 0; i < strArray.getN() + 1; ++i) {
            try {
                std::cout << strArray[i] << " ";
            }
            catch (std::exception &ex) {
                std::cout << "" << std::endl;
                std::cout << ex.what() << std::endl;
            }
        }
        std::cout << "" << std::endl;
    }
    return 0;
}
