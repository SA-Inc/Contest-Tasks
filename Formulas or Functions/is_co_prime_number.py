def isCoprime(value1, value2):
    while (value1 != 0 and value2 != 0):
        if (value1 > value2):
            value1 %= value2
        else:
            value2 %= value1

    return max(value1, value2) == 1
