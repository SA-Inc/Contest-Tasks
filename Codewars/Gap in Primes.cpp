// https://www.codewars.com/kata/561e9c843a2ef5a40c0000a4

#include <iostream>
#include <cmath>

using namespace std;

int isPrimeNumber(long long n) {
    for(int i = 2; i <= (int)pow(n, 0.5) + 1; i++) {
        if (n % i == 0) {
            return false;
        }
    }

   return true;
}

class GapInPrimes
{
public:
    static pair<long long, long long> gap(int g, long long m, long long n) {
    long long first;
    long long second;

    bool isPrime;

    for(long long i = m; i < n; i++) {
        isPrime = isPrimeNumber(i);
        
        if(isPrime == true) {
            first = second;
            second = i;
            if ((second - first) == g) {
                return {first, second};
            }
        }
    }

    return {0, 0};
  }
};
