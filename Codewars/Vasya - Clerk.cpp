// https://www.codewars.com/kata/555615a77ebc7c2c8a0000b8

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

string tickets(const vector<int>& peopleInLine) {
    map<int, int> bills;
 
    for (int i = 0; i < peopleInLine.size(); i++) {
        int bill = peopleInLine[i];

        if (bill == 25) {
            bills[bill]++;
        } else if (bill == 50) {
            if (bills[25] > 0) {
                bills[25]--;
                bills[bill]++;
            } else {
                return "NO";
            }
        } else if (bill == 100) {
            if (bills[50] > 0 && bills[25] > 0) {
                bills[25]--;
                bills[50]--;
                bills[bill]++;
            } else if (bills[25] >= 3) {
                bills[25] -= 3;
                bills[bill]++;
            } else {
                return "NO";
            }
        }     
    }
    
    return "YES";
}
