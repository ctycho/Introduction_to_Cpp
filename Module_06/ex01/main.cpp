#include <iostream>

struct Data {
    int     _num;
    std::string _str1;
    std::string _str2;
};

void *serialize(void) {
    char *_str = new char[20];

    *reinterpret_cast<int *>(&_str[8]) = rand() % 17;
    for (int i = 0; i < 7; ++i) {
        _str[i] = rand() % 26 + 97;
    }
    _str[7] = '\0';
    for (int i = 12; i < 19; ++i) {
        _str[i] = rand() % 26 + 97;
    }
    _str[19] = '\0';
    std::cout << "serialize" << std::endl;
    std::cout << "str1 = " << reinterpret_cast<char *>(&_str[0]) << std::endl;
    std::cout << "str2 = " << reinterpret_cast<char *>(&_str[12]) << std::endl;
    std::cout << "num = " << *reinterpret_cast<int *>(&_str[8]) << std::endl;
    return reinterpret_cast<void *>(_str);
}

Data *deserialize(void * raw) {
    Data *res = new Data;

    res->_num = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
    res->_str1 = std::string(reinterpret_cast<char *>(raw), 8);
    res->_str2 = std::string(reinterpret_cast<char *>(raw) + 12, 8);
    return res;
}

int main() {
    Data *res;
    void *raw;

    srand(time(0));
    raw = serialize();
    res = deserialize(raw);

    std::cout << "deserialize" << std::endl;
    std::cout << "str1: " << res->_str1 << std::endl;
    std::cout << "str2: " << res->_str2 << std::endl;
    std::cout << "num: " << res->_num << std::endl;
    delete res;
    return 0;
}
