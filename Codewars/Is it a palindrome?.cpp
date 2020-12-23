// https://www.codewars.com/kata/57a1fd2ce298a731b20006a4

#include <string>

bool isPalindrom (const std::string& str)
{
  for (int i = 0; i < str.size(); i++) {
      if (tolower(str[i]) != tolower(str[str.size() - i - 1])) {
          return false;
      }
  }

  return true;
}
