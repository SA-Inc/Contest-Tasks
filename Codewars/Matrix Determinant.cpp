// https://www.codewars.com/kata/52a382ee44408cea2500074c

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

long long determinant(vector<vector<long long>> m) {
    long long det = 0;
    int n = m.size();

    if (n == 1) {
        return m[0][0];
    } else if (n == 2) {
        return ((m[0][0] * m[1][1]) - (m[1][0] * m[0][1]));
    } else {
        for (int p = 0; p < m[0].size(); p++) {
            vector<vector<long long>> TempMatrix;
        
            for (int i = 1; i < m.size(); i++) {
                vector<long long> TempRow;
            
                for (int j = 0; j < m[i].size(); j++) {
                    if (j != p) {
                        TempRow.push_back(m[i][j]); 
                    }
                }
            
                if (TempRow.size() > 0) {
                    TempMatrix.push_back(TempRow);
                }
            }
            det = det + m[0][p] * pow(-1, p) * determinant(TempMatrix);
        }

        return det;
    }
};
