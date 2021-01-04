# https://www.codewars.com/kata/5a8d2bf60025e9163c0000bc

def solve(arr):
    freq = {}
    for num in arr:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    # sort dict by value desc, then by key asc
    freq = dict(sorted(freq.items(), key=lambda x: (-x[1], x[0])))

    res = []

    for num in freq:
        res += [num] * freq[num]
    return res
