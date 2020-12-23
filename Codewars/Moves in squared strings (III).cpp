// https://www.codewars.com/kata/56dbeec613c2f63be4000be6

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

class Opstrings3
{
public:
    static std::string diag1Sym(const std::string &strng);
    static std::string rot90Clock(const std::string &strng);
    static std::string selfieAndDiag1(const std::string &strng);
    // ... complete oper
    template<typename Func>
    static std::string oper(Func func, const std::string &s);
};

std::string Opstrings3::diag1Sym(const std::string &strng){
    std::stringstream ss(strng);
    std::string temp;
    std::string restr;

    ss >> temp;
    int n = temp.size();
    std::vector<std::vector<std::string>> res(n);
    for (int i = 0; i < res.size();i++){
        res[i].resize(n);
    }
        for (int i = 0; i < n; ++i)
        {
            res[i][0] = temp[i];
        }
    for (int i = 1; i < n; ++i)
    {
        ss >> temp;
        for (int j = 0; j < n;j++){
            res[j][i] = temp[j];
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            restr+=res[i][j];
        }
        restr += '\n';
    }

    return restr.substr(0,restr.size()-1);
}

std::string Opstrings3::rot90Clock(const std::string &strng){
    std::string diagstr = Opstrings3::diag1Sym(strng);
    std::stringstream ss(diagstr);
    std::string temp;
    std::string res;
    while (ss >> temp)
    {
        for (int i = temp.size() - 1; i >= 0;i--){
            res += temp[i];
        }
        res += '\n';
    }
    return res.substr(0, res.size() - 1);

}

std::string Opstrings3::selfieAndDiag1(const std::string &strng){
    std::string diagstr = Opstrings3::diag1Sym(strng);

    std::stringstream ss1(strng);
    std::stringstream ss2(diagstr);
    std::string temp1;
    std::string temp2;
    std::string res;

    while((ss1>>temp1)&&(ss2>>temp2)){
        res =res + temp1 + '|' + temp2 + '\n';
    }
    return res.substr(0, res.size() - 1);
}

template<typename Func>
std::string Opstrings3::oper(Func func, const std::string &s){
    return func(s);
}
