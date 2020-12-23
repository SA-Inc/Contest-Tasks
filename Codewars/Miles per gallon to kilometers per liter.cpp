// https://www.codewars.com/kata/557b5e0bddf29d861400005d

#include <cmath>

double converter(int mpg)
{
    return std::round((mpg * (1.609344 / 4.54609188)) * 100.0) / 100.0;
}
