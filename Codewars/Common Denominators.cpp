// https://www.codewars.com/kata/54d7660d2daf68c619000d95

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b) { 
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a); 
}

unsigned long long lcm(unsigned long long a, unsigned long long b) {
    return a * b / gcd(a, b);
}

unsigned long long lcmArray(vector<unsigned long long> &arr) {
    if (arr.size() == 2) {
        return lcm(arr[0], arr[1]);
    } else {
        vector<unsigned long long> slicedArray = vector<unsigned long long>(arr.begin() + 1, arr.end());
        return lcm(arr[0], lcmArray(slicedArray));
    }
}

class Fracts
{

public:
    static string convertFrac(vector<vector<unsigned long long>> &lst) {
    vector<unsigned long long> denominators;
    string result;

    for (unsigned long long i = 0; i < lst.size(); i++) {
        denominators.push_back(lst[i][1]);
    }

    unsigned long long commonDenominator = lcmArray(denominators);

    for (unsigned long long i = 0; i < lst.size(); i++) {
        result += "(";
        result += to_string(commonDenominator / denominators[i] * lst[i][0]);
        result += ",";
        result += to_string(commonDenominator);
        result += ")";
    }

    return result;
  }
};
