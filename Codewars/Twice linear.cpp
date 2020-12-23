// https://www.codewars.com/kata/5672682212c8ecf83e000050

#include <iostream>
#include <vector>
#include <set>

using namespace std;

class DoubleLinear
{
public:
    static int dblLinear(int n) {
    int ai = 0, bi = 0, eq = 0;
    vector<int> sequence;
    sequence.push_back(1);
  
    while (ai + bi < n + eq) {
        int y = 2 * sequence[ai] + 1;
        int z = 3 * sequence[bi] + 1;
        
        if (y < z) {
            sequence.push_back(y);
            ai++;
        }
        else if (y > z) {
            sequence.push_back(z);
            bi++;
        }
        else {
            sequence.push_back(y); 
            ai++;
            bi++;
            eq++;
        }
    }
    
    return sequence.back();
  }
};
