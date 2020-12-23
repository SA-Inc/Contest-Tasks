// https://www.codewars.com/kata/554f76dca89983cc400000bb

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

class Dioph
{
  public:
  static vector<pair <long, long>> solEquaStr(long long n) {
    vector<pair<long, long>> res;

    for (long long i = 1; i < long(sqrt(n)) + 1; i++) {
        if (n % i == 0) {
            long long j = n / i;
            
            if ((i + j) % 2 == 0 && (j - i) % 4 == 0) {
                long long x = (i + j) / 2;
                long long y = (j - i) / 4;

                res.push_back(make_pair(x, y));
            }
        }
    }

    return res;
  }
};
