from tabulate import tabulate

n = 11
res = []

for a in range(0, n + 1):
    for x in range(0, n + 1):
        q = x ** 2
        l = q % n
        r = a % n
        eq = l == r
        if (eq == True):
            res.append(tuple((x, q, a, l, r)))
            print('{}^2 % {} = {} % {}'.format(x, n, a, n))

print('Count: {}'.format(len(res)))
print(tabulate(res, tablefmt="presto", headers=["x", "x^2", "a (quad res)", "x^2 % n", "a % n"]))