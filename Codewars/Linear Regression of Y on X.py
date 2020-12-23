# https://www.codewars.com/kata/5515395b9cd40b2c3e00116c

from functools import reduce

def regressionLine(x, y):
    n = len(x)
    x_pow_2_sum = sum(map((lambda x: x **2), x))
    x_sum = sum(x)
    y_sum = sum(y)
    x_y_sum = sum([x * y for x, y in zip(x, y)])
    a = (x_pow_2_sum * y_sum - x_sum * x_y_sum) / (n * x_pow_2_sum - (x_sum ** 2))
    b = (n * x_y_sum - x_sum * y_sum) / (n * x_pow_2_sum - (x_sum ** 2))
    return (round(a, 4), round(b, 4))
