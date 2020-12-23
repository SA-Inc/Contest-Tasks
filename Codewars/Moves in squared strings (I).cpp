// https://www.codewars.com/kata/56dbe0e313c2f63be4000b25

#include <iostream>
#include <sstream>
#include <string>


class Opstrings
{
public:
    static std::string vertMirror(const std::string &strng);
    static std::string horMirror(const std::string &strng);
    // your high order function oper
    //... oper(...);
    template<typename Func>
    static std::string oper(Func func, const std::string &s);

};

std::string Opstrings::vertMirror(const std::string &strng){
    std::stringstream ss(strng);
    std::string temp;
    std::string retstr;
    while(ss>>temp){
        for (int i = temp.size() - 1; i >= 0;i--){
            retstr += temp[i];
        }
        retstr += '\n';
    }
    return retstr.substr(0, retstr.size() - 1);
}
std::string Opstrings::horMirror(const std::string &strng){
    std::string vertstr = vertMirror(strng);
    std::string restr;
    for (int i = vertstr.size()-1; i >= 0;i--){
        restr += vertstr[i];
    }
    return restr;
}

template<typename Func>
std::string Opstrings::oper(Func func,const std::string &s){
    return func(s);

}
