// https://www.codewars.com/kata/59280c056d6c5a74ca000149

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

long long determinant(std::vector<std::vector<long long>> m) {
    long long det = 0;
    int n = m.size();

    if (n == 1) {
        return m[0][0];
    } else if (n == 2) {
        return ((m[0][0] * m[1][1]) - (m[1][0] * m[0][1]));
    } else {
        for (int p = 0; p < m[0].size(); p++) {
            std::vector<std::vector<long long>> TempMatrix;
        
            for (int i = 1; i < m.size(); i++) {
                std::vector<long long> TempRow;
            
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

int* solveEq(int eq[3][4]) {
    static int result[3];
    std::vector<std::vector<long long>> main = {{eq[0][0], eq[0][1], eq[0][2]}, {eq[1][0], eq[1][1], eq[1][2]}, {eq[2][0], eq[2][1], eq[2][2]}};
    std::vector<std::vector<long long>> first = {{eq[0][3], eq[0][1], eq[0][2]}, {eq[1][3], eq[1][1], eq[1][2]}, {eq[2][3], eq[2][1], eq[2][2]}};
    std::vector<std::vector<long long>> second = {{eq[0][0], eq[0][3], eq[0][2]}, {eq[1][0], eq[1][3], eq[1][2]}, {eq[2][0], eq[2][3], eq[2][2]}};
    std::vector<std::vector<long long>> third = {{eq[0][0], eq[0][1], eq[0][3]}, {eq[1][0], eq[1][1], eq[1][3]}, {eq[2][0], eq[2][1], eq[2][3]}};

    long long dMain = determinant(main);
    long long dFirst = determinant(first);
    long long dSecond = determinant(second);
    long long dThird = determinant(third);

    int x = dFirst / dMain;
    int y = dSecond / dMain;
    int z = dThird / dMain;

    result[0] = x;
    result[1] = y;
    result[2] = z;

    // std::cout << dMain << " " << dFirst << " " << dSecond << " " << dThird << std::endl;
    // std::cout << x << " " << y << " " << z << std::endl;

    return result;
}
