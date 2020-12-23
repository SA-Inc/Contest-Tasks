# https://www.codewars.com/kata/56882731514ec3ec3d000009

def printBoard(board):
    for r in board:
        for c in r:
            print(c, end = " ")
        print()

def checkWin(board, player):
    height = len(board[0])
    width = len(board)

    # horizontalCheck 
    for j in range(height - 3):
        for i in range(width):
            if (board[i][j] == player and
                board[i][j+1] == player and
                board[i][j+2] == player and
                board[i][j+3] == player):
                return True

    # verticalCheck
    for i in range(width - 3):
        for j in range(height):
            if (board[i][j] == player and
                board[i+1][j] == player and
                board[i+2][j] == player and
                board[i+3][j] == player):
                return True

    # ascendingDiagonalCheck
    for i in range(3, width):
        for j in range(height - 3):
            if (board[i][j] == player and
                board[i-1][j+1] == player and
                board[i-2][j+2] == player and
                board[i-3][j+3] == player):
                return True

    # descendingDiagonalCheck
    for i in range(3, width):
        for j in range(3, height):
            if (board[i][j] == player and
                board[i-1][j-1] == player and
                board[i-2][j-2] == player and
                board[i-3][j-3] == player):
                return True

    return False

def getFreePositionInColumn(col):
    for i in range(len(col) - 1, -1, -1):
        if col[i] == 0:
            return i

def getColumn(matrix, i):
    return [row[i] for row in matrix]

def who_is_winner(pieces_position_list):
    rows = 6
    cols = 7
    board = [[0 for x in range(cols)] for y in range(rows)]
    colsDict = {
        'A': 0,
        'B': 1,
        'C': 2,
        'D': 3,
        'E': 4,
        'F': 5,
        'G': 6,
    }
    colorDict = {
        'Red': 'R',
        'Yellow': 'Y'
    }

    for piece in pieces_position_list:
        move = piece.split('_')
        boardCol = getColumn(board, colsDict[move[0]])
        position = getFreePositionInColumn(boardCol)
        board[position][colsDict[move[0]]] = colorDict[move[1]]

        isWin = checkWin(board, colorDict[move[1]])

        if (isWin == True):
            return move[1]

    return 'Draw'
