//
// Created by Cavalo Tycho on 6/14/21.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <exception>
#include <stdexcept>
#include <iostream>
#include <string>

class Bureaucrat {
private:
    const std::string   _name;
    int                 _grade;
    Bureaucrat();
public:
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(const Bureaucrat &);
    Bureaucrat &operator = (const Bureaucrat &);
    virtual ~Bureaucrat();
    class GradeTooHighException: public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
    public:
        virtual const char* what() const throw();
    };
    void handleExeption(int grade);
    void increase();
    void decrease();
    const std::string &getName() const;
    int getGrade() const;
};

std::ostream& operator << (std::ostream &out, const Bureaucrat &source);


#endif //EX00_BUREAUCRAT_HPP
