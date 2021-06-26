
#include "Replace.hpp"


Replace::Replace() {
}

Replace::~Replace() {
}

std::string Replace::replaceAll(std::string dst, std::string s1, std::string s2) {
    int     index = 0;

    while (true)
    {
        index = dst.find(s1, index);
        if (index == std::string::npos)
            break;
        dst.replace(index, s1.length(), s2);
        index += s2.length();
    }
    return dst;
}

void    Replace::main_proccess(std::string file, std::string searchingString, std::string replacingString) {
    std::string s;

    if (file.length() == 0)
        std::cout << "Empty file name" << std::endl;
    if (searchingString.length() == 0)
        std::cout << "Empty searching string" << std::endl;
    if (replacingString.length() == 0)
        std::cout << "Empty replacing string" << std::endl;
    _file.open(file);
    if (!_file.is_open())
        std::cout << "Couldn't open the file" << std::endl;
    else {
        _newFile.open(file + ".replace", std::ofstream::app);
        if (!_newFile.is_open())
            std::cout << "Couldn't open the new file" << std::endl;
        while (std::getline(_file, s))
        {
            s = replaceAll(s, searchingString, replacingString);
            _newFile << s << std::endl;
        }
        _file.close();
        _newFile.close();
    }
}