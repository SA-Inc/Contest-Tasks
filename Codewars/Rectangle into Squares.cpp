// https://www.codewars.com/kata/55466989aeecab5aac00003e

#include <vector>

using namespace std;

class SqInRect
{
  public:
  static vector<int> sqInRect(int lng, int wdth) {
    int area = lng * wdth;
    vector<int> sides;

    if (lng == wdth) {
        return sides;
    }

    while (area > 0) {
        if (lng < wdth) {
            sides.push_back(lng);
            wdth -= lng;
            area -= lng * lng;
        } else {
            sides.push_back(wdth);
            lng -= wdth;
            area -= wdth * wdth;
        }   
    }

    return sides;
  };
};
