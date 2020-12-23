// https://www.codewars.com/kata/56dbe7f113c2f63570000b86

#include <iostream>
#include <string>
#include <sstream>

class Opstrings1
{

public:
    static std::string rot(const std::string &strng);
    static std::string selfieAndRot(const std::string &strng);
    // ... complete oper
    template<typename Func>
    static std::string oper(Func func, const std::string &s);
};

std::string Opstrings1::rot(const std::string &strng){
    std::string ret;
    for (int i = strng.size() - 1; i >= 0;i--){
        ret += strng[i];
    }
    return ret;
}

std::string Opstrings1::selfieAndRot(const std::string &strng){
    std::string ret;
    std::string temp;
    std::string res;
    std::stringstream ss(strng);

    int n;
    
    while(ss>>temp){
        n = temp.size();
        ret = ret + temp + std::string(n,'.') + "\n";
    }
    res = Opstrings1::rot(ret);
    res = ret.substr(0, ret.size() - 1)+res;
    return res;
}
template<typename Func>
std::string Opstrings1::oper(Func func, const std::string &s){
        return func(s);
} 
