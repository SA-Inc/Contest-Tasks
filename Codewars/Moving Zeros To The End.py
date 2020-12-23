# https://www.codewars.com/kata/52597aa56021e91c93000cb0

def move_zeros(array):
    res = []
    zeros = 0
    for i in range(len(array)):
        if ((type(array[i]) == int or type(array[i]) == float) and array[i] == 0):
            zeros += 1
        else:
            res.append(array[i])
    res += ([0] * zeros)
    return res
