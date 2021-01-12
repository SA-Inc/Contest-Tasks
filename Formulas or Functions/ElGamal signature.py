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

p = 11 # public
g = 2 # public
x = 8 # private
y = 3 # public
k = 9
a = (g ** k) % p

m1 = 2
m2 = 4
m3 = 6

# Sign
l = modinv(k, p - 1) # Modular multiplicative inverse
s1 = l * (m1 - x * a) % (p - 1)
s2 = l * (m2 - x * a) % (p - 1)
s3 = l * (m3 - x * a) % (p - 1)
# {a, s} - Sign

# Verification
m1v1 = (g ** m1) % p
m1v2 = ((y ** a) * (a ** s1)) % p

m2v1 = (g ** m2) % p
m2v2 = ((y ** a) * (a ** s2)) % p

m3v1 = (g ** m3) % p
m3v2 = ((y ** a) * (a ** s3)) % p

print('p = {}, g = {}'.format(p, g))
print('x = {}, y = {}'.format(x, y))
print('k = {}, a = {}'.format(k, a))

print('m1 = {}'.format(m1))
print('m2 = {}'.format(m2))
print('m3 = {}'.format(m3))

print('k^-1 = {}'.format(l))

print('s1 = k^-1 * (m1 - x * a) mod (p - 1) = {} * ({} - {} * {}) mod ({} - 1) = {}'.format(l, m1, x, a, p, s1))
print('s2 = k^-1 * (m2 - x * a) mod (p - 1) = {} * ({} - {} * {}) mod ({} - 1) = {}'.format(l, m2, x, a, p, s2))
print('s3 = k^-1 * (m3 - x * a) mod (p - 1) = {} * ({} - {} * {}) mod ({} - 1) = {}'.format(l, m3, x, a, p, s3))

print('{}, {}'.format(a, s1))
print('{}, {}'.format(a, s2))
print('{}, {}'.format(a, s3))

print('m1v1 = g^m1 mod p = {}^{} mod {} = {}'.format(g, m1, p, m1v1))
print('m1v2 = ((y ** a) * (a ** s1)) % p = ({}^{} * {}^{}) % {} = {}'.format(y, a, a, s1, p, m1v2))
print()
print('m2v1 = g^m2 mod p = {}^{} mod {} = {}'.format(g, m2, p, m2v1))
print('m2v2 = ((y ** a) * (a ** s2)) % p = ({}^{} * {}^{}) % {} = {}'.format(y, a, a, s2, p, m2v2))
print()
print('m3v1 = g^m3 mod p = {}^{} mod {} = {}'.format(g, m3, p, m3v1))
print('m3v2 = ((y ** a) * (a ** s1)) % p = ({}^{} * {}^{}) % {} = {}'.format(y, a, a, s3, p, m3v2))
print()
# # print('m2v1 = {}, m2v2 = {}'.format(m2v1, m2v2))
# # print('m3v1 = {}, m3v2 = {}'.format(m3v1, m3v2))
