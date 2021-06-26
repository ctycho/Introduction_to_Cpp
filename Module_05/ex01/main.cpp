
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat jim("Jim", 10);
        std::cout << jim;
        Form f1("document1", 52, 12);
        f1.beSigned(&jim);
        f1.beSigned(&jim);
        std::cout << f1;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    /*
 * Документ имеет слишком маленький уровень
 */
    try {
        Bureaucrat jim("Jimmy", 12);
        Form form1("document1", 151, 13);
        form1.beSigned(&jim);
        std::cout << jim;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
//*
// * Фома слишком высокого уровня
// */
    try {
        Form form("doc", 0, 12);
        std::cout << form;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
///*
// * нормальный уровень формы
// */
    try {
        Form form("doc", 19, 12);
        std::cout << form;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
//    /*
// * Бюрократ не может подписать форму, так как уровень формы выше уровня бюрократа
// */
    try {
        Bureaucrat jim("Jimmy", 12);
        std::cout << jim;
        Form form1("document1", 2, 13);
        form1.beSigned(&jim);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Bureaucrat jim("Jimmy", 12);
        std::cout << jim;
        Form form1("document1", 22, 13);
        form1.beSigned(&jim);
        jim.signForm(&form1);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
