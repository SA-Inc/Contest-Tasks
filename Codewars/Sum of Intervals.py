# https://www.codewars.com/kata/52b7ed099cdc285c300001cd

def sum_of_intervals(intervals):
    numbers = []
    for interval in intervals:
        for i in range(interval[0], interval[1]):
            numbers.append(i)
    return len(set(numbers))
