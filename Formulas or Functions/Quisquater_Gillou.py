# Guillou-Quisquater
# Sender creates module (not secret)
p = 3
q = 17
n = p * q

# Exponent
e = 3

# Sender random x
x = 20
# Sender secret X
X = (x ** e) % n

# Sender random y
y = 32
# Sender secret Y, send to Receiver
Y = (y ** e) % n

# Receiver random c, send to Sender
c = 15

# Sender
z = y * (x ** c) % n

# Receiver
v1 = (z ** e) % n
v2 = Y * (X ** c) % n

print('p = {}, q = {}'.format(p, q))
print('n = {}'.format(n))

print('x = {}'.format(x))
print('X = x^e % n = {}^{} % {} = {}'.format(x, e, n, X))
print('y = {}'.format(y))
print('Y = y^e % n = {}^{} % {} = {}'.format(y, e, n, Y))

print('c = {}, e = {}'.format(c, e))
print('z = y * x^c % n = {} * {}^{} % {} = {}'.format(y, x, c, n, z))
print('v1 = z^e % n = {}^{} % {} = {}'.format(z, e, n, v1))
print('v2 = Y * X^c % n = {} * {}^{} % {} = {}'.format(Y, X, c, n, v2))
