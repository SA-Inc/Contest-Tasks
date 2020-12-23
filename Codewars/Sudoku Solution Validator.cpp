// https://www.codewars.com/kata/529bf0e9bdf7657179000008

bool validSolution(unsigned int board[9][9]) {
    // Check Horizontal.
    for (int row = 0; row < 9; row++) {
        int rowSum = 0;

        for (int col = 0; col < 9; col++) {
            rowSum += board[row][col];
        }

        if (rowSum != 45) {
            return false;
        }
    }

    // Check Vertical.
    for (int row = 0; row < 9; row++) {
        int colSum = 0;

        for (int col = 0; col < 9; col++) {
            colSum += board[col][row];
        }

        if (colSum != 45) {
            return false;
        }
    }

    // Check Block.
    for(int bx = 0; bx < 9;  bx += 3) {
        for(int by = 0; by < 9; by += 3) {
            int blockSum = 0;

            for(int x = 0; x < 3; ++x) {
                for(int y = 0; y < 3; ++y) {
                    blockSum += board[bx + x][by + y];
                }
            }

            if (blockSum != 45) {
                return false;
            }
        }
    }

    return true;
}
