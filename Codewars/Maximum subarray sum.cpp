// https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c

#include <vector>

using namespace std;

int maxSequence(const vector<int>& arr){
    if (arr.empty()) {
        return 0;
    }

    int maxSubsequenceSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        int currentSubsequenceSum = 0;

        for (int j = i; j < arr.size(); j++) {
            currentSubsequenceSum += arr[j];

            if (maxSubsequenceSum < currentSubsequenceSum) {
                maxSubsequenceSum = currentSubsequenceSum;
            }
        }
    }

    return maxSubsequenceSum;
}
