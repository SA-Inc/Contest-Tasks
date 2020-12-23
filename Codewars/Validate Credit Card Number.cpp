// https://www.codewars.com/kata/5418a1dd6d8216e18a0012b2

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int sumVector(vector<int> v) {
    int sum = 0;

    for (size_t i = 0; i < v.size(); i++) {
        sum += v[i];
    }

    return sum;
}

vector<int> splitNumberIntoDigit(long long int number) {
    vector<int> digits;

    while (number > 0) {
        int digit = number % 10;
        number /= 10;
        digits.push_back(digit);
    }

    return digits;
}

class Kata {
  public:
  static bool validate(long long int n) {
    vector<int> digits =  splitNumberIntoDigit(n);

    for (size_t i = 0; i < digits.size(); i++) {
        if (i % 2 != 0) {
            digits[i] *= 2;
        }
    }

    for (size_t i = 0; i < digits.size(); i++) {
        if (digits[i] > 9) {
            digits[i] = sumVector(splitNumberIntoDigit(digits[i]));
        }
    }

    if (sumVector(digits) % 10 == 0){
        return true;
    } else {
        return false;
    }
  }
};
