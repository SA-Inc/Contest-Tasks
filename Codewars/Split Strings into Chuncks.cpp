// https://www.codewars.com/kata/515de9ae9dcfc28eb6000001

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<string> solution(const string &s) {
    int chunkSize = 2;
    vector<string> resultVector = {};

    for (int i = 0; i < s.size(); i+=chunkSize) {
        resultVector.insert(resultVector.end(), s.substr(i, chunkSize));
    }

    if (s.size() % 2 != 0) {
        resultVector[resultVector.size() - 1] += '_';
    }
    
    return resultVector;
}
