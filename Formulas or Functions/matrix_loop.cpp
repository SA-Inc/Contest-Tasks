#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    const int ROW = 3;
    const int COL = 4;
    char board[ROW][COL];



    cout << "From Top and Left, Row then Col" << endl;
    for (int row = 0; row < ROW; row++) {
        for (int col = 0; col < COL; col++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;



    cout << "From Top and Left, Col then ROW" << endl;
    for (int col = 0; col < COL; col++) {
        for (int row = 0; row < ROW; row++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;



    cout << "From Bottom and Left, Row then Col" << endl;
    for (int row = ROW - 1; row >= 0; row--) {
        for (int col = 0; col < COL; col++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;



    cout << "From Bottom and Left, Col then Row" << endl;
    for (int col = 0; col < COL; col++) {
        for (int row = ROW - 1; row >= 0; row--) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;



    cout << "From Top and Right, Row then Col" << endl;
    for (int row = 0; row < ROW; row++) {
        for (int col = COL - 1; col >= 0; col--) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;



    cout << "From Top and Right, Col then Row" << endl;
    for (int col = COL - 1; col >= 0; col--) {
        for (int row = 0; row < ROW; row++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;



    cout << "From Bottom and Right, Row then Col" << endl;
    for (int row = ROW - 1; row >= 0; row--) {
        for (int col = COL - 1; col >= 0; col--) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;



    cout << "From Bottom and Right, Col then Row" << endl;
    for (int col = COL - 1; col >= 0; col--) {
        for (int row = ROW - 1; row >= 0; row--) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
