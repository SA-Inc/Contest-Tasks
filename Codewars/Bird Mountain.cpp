// https://www.codewars.com/kata/5c09ccc9b48e912946000157

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int peak_height(vector<string>& mountain) {
    int height = 0;
    int rows = mountain.size();
    int cols = mountain[0].size();
    bool isTouched = true;
    int offset = 1;
    vector<vector<int>> map(rows, vector<int> (cols, 0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mountain[i][j] == '^') {
                map[i][j] = 1;
                height = 1;
            }
        }
    }

    while (isTouched) {
        isTouched = false;
        vector<vector<int>> tmpMap = map;

        for (int i = offset; i < rows - offset; i++) {
            for (int j = offset; j < cols - offset; j++) {
                if (map[i][j] > 0 &&
                    map[i][j] == map[i + 1][j] &&
                    map[i][j] == map[i - 1][j] &&
                    map[i][j] == map[i][j + 1] &&
                    map[i][j] == map[i][j - 1]
                ) {
                    tmpMap[i][j] += 1;
                    isTouched = true;
                    height = max(tmpMap[i][j], height);
                }
            }
        }

        map = tmpMap;
    }
    

    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cout << map[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return height;
}
