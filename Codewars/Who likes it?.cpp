// https://www.codewars.com/kata/5266876b8f4bf2da9b000362

#include <iostream>
#include <vector>
#include <string>

std::string likes(const std::vector<std::string>& names) {
  if (names.size() == 0) {
    return "no one likes this";
  } else if (names.size() == 1) {
    return names.at(0) + " likes this";
  } else if (names.size() == 2) {
    return names.at(0) + " and " + names.at(1) + " like this";
  } else if (names.size() == 3) {
    return names.at(0) + ", " + names.at(1) + " and " + names.at(2) + " like this";
  } else if (names.size() >= 4) {
    int other = names.size() - 2;
    return names.at(0) + ", " + names.at(1) + " and " + std::to_string(other) + " others like this";
  }
}
