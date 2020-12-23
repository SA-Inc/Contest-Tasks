// https://www.codewars.com/kata/5a61a846cadebf9738000076

int solve(std::vector<int>v) {
    for(int i = 0; i < v.size(); i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int l = 0; l <= i; l++) {
            leftSum += v[l];
        }

        for(int r = v.size() - 1; r >= i; r--) {
            rightSum += v[r];
        }

        if (leftSum == rightSum) {
            return i;
        }

        // std::cout << i << " " << leftSum << " " << rightSum << std::endl;
    }

    return -1;
}
