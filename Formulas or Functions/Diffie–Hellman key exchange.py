def egcd(a, b):
    if a == 0:
        return (b, 0, 1)
    else:
        g, y, x = egcd(b % a, a)
        return (g, x - (b // a) * y, y)

def modinv(a, m):
    g, x, y = egcd(a, m)
    if g != 1:
        raise Exception('modular inverse does not exist')
    else:
        return x % m

n = 53
g = 5

# Alice
x = 13
a = (g ** x) % n

# Bob
y = 35
b = (g ** y) % n

# Keys
ka = (b ** x) % n
kb = (a ** y) % n
k = (g ** (x * y)) % n

m1 = 19
m2 = 16
m3 = 12

# Enc
c1 = (m1 * k) % n
c2 = (m2 * k) % n
c3 = (m3 * k) % n

# Dec
l = modinv(k, n)
d1 = (c1 * l) % n
d2 = (c2 * l) % n
d3 = (c3 * l) % n

print('n = {}, g = {}'.format(n, g))

print('x = {}'.format(x))
print('a = g^x mod n = {}^{} mod {} = {}'.format(g, x, n, a))

print('y = {}'.format(y))
print('b = g^y mod n = {}^{} mod {} = {}'.format(g, y, n, b))

print('ka = b^x mod n = {}^{} mod {} = {}'.format(b, x, n, ka))
print('kb = a^y mod n = {}^{} mod {} = {}'.format(a, y, n, kb))
print('k = g^(x * y) mod n = {}^({}*{}) mod {} = {}'.format(g, x, y, n, k))

print('m1 = {}'.format(m1))
print('m2 = {}'.format(m2))
print('m3 = {}'.format(m3))
print()
print('c1 = (m1 * k) mod n = ({} * {}) mod {} = {}'.format(m1, k, n, c1))
print('c2 = (m2 * k) mod n = ({} * {}) mod {} = {}'.format(m2, k, n, c2))
print('c3 = (m3 * k) mod n = ({} * {}) mod {} = {}'.format(m3, k, n, c3))
print()
print('k^-1 mod n = {}^-1 mod {} = {}'.format(k, n, l))
print('d1 = (c1 * k^-1) % n = ({} * {}) % {} = {}'.format(c1, l, n, d1))
print('d2 = (c2 * k^-1) % n = ({} * {}) % {} = {}'.format(c2, l, n, d2))
print('d3 = (c3 * k^-1) % n = ({} * {}) % {} = {}'.format(c3, l, n, d3))