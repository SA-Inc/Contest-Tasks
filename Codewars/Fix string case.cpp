// https://www.codewars.com/kata/5b180e9fedaa564a7000009a

#include <string>

std::string solve(const std::string& str){
  int l = 0;
  int u = 0;
  std::string res = "";
  
  for (int i = 0; i < str.size(); i++) {
    if (std::isupper(str[i])) {
      u++;
    } else {
      l++;
    }
  }
  
  for (int i = 0; i < str.size(); i++) {
    if (l >= u) {
      res += std::tolower(str[i]);
    } else {
      res += std::toupper(str[i]);
    }
  }
  
  return res;
}
