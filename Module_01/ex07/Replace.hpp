
#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Replace {
private:
    std::ifstream     _file;
    std::ofstream     _newFile;
public:
    Replace();
    ~Replace();
    void    main_proccess(std::string file, std::string searchingString, std::string replacingString);
    std::string replaceAll(std::string dst, std::string s1, std::string s2);
};


#endif
