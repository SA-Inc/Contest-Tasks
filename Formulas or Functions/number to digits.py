def digitsToNumber(d):
    res = 0
    for i in range(0, len(d)):
        res *= 10
        res += d[i]

    return res

def numberToDigits(n):
    res = []
    while(n != 0):
        res.append(n % 10)
        n = n // 10
    res.reverse()
    return res
