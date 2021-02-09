#include <iostream>
#include <string>
#include <vector>

std::vector<std::vector<int>> arrayIntoChuck(std::vector<int> arr, int chunk) {
    std::vector<std::vector<int>> chunks;
    if (arr.size() % chunk != 0) {
        arr.resize(arr.size() + chunk - (arr.size() % chunk), 0);
    }

    for (int i = 0; i < arr.size(); i += chunk) {
        chunks.push_back(std::vector<int>(arr.begin() + i, arr.begin() + i + chunk));
    }

    return chunks;
}

int main(int argc, char const *argv[]) {
    arrayIntoChuck(std::vector<int>{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, 5);
    return 0;
}
