# https://www.codewars.com/kata/596f28fd9be8ebe6ec0000c1

def is_wave_sorted(a):
    for i in range(0, len(a) - 1):
        if not i % 2 and a[i] < a[i+1]:
            return False
        if i % 2 and a[i] > a[i+1]:
            return False
    return True

def wave_sort(a):
    for i in range(0, len(a) - 1):
        if not i % 2 and a[i] < a[i+1]:
            a[i], a[i+1] = a[i+1], a[i]
        if i % 2 and a[i] > a[i+1]:
            a[i], a[i+1] = a[i+1], a[i]
    return a
