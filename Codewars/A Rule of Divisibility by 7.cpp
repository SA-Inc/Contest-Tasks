// https://www.codewars.com/kata/55e6f5e58f7817808e00002e

class DivSeven
{
public:
    static std::pair <long long, long long> seven(long long m) {
      long long count = 0;

      while(m > 99) {
        m = (m / 10) - (2 * (m % 10)); 
        count++;
      }

      return std::make_pair(m, count);
    }
};
