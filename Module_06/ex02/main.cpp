#include <iostream>

class Base {
public:
    virtual ~Base() {};
};

class A : public Base {
public:
    A() {};
    ~A() {};
};

class B : public Base {
public:
    B() {};
    ~B() {};
};

class C : public Base {
public:
    C() {};
    ~C() {};
};

Base * generate(void) {
    int res = rand() % 3;

    std::cout << res << std::endl;
    if (res == 0)
        return new A;
    else if (res == 1)
        return new B;
    else
        return new C;
}

void identify_from_pointer(Base * p) {
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p) {
    try {
        Base &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    } catch (const std::bad_cast &e) {(void)e;}
    try {
        Base &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
    } catch (const std::bad_cast &e) {(void)e;}
    try {
        Base &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
    } catch (const std::bad_cast &e) {(void)e;}
}

int main() {
    Base *m;

    srand(time(0));
    m = generate();
    identify_from_pointer(m);
    identify_from_reference(*m);
    return 0;
}
