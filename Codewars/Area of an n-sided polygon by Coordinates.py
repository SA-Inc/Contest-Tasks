# https://www.codewars.com/kata/5727500a20c7f837fc001869

def area_polygon(vertex):
    vertex.append(vertex[0])
    sum = 0
    for i in range(0, len(vertex) - 1):
        sum += vertex[i][0] * vertex[i + 1][1] - vertex[i][1] * vertex[i + 1][0]
    return round(abs(sum / 2), 1)
