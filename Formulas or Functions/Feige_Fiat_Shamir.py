# create module (not secret)
p = 3
q = 17
n = p * q

# Sender gen Secret Numbers (co prime to N, shoudnt equal to N)
s1 = 7
s2 = 10
s3 = 22
s4 = 29

# Receiver Random Verify Predicate, to Sender
a1 = 1
a2 = 1
a3 = 0
a4 = 1

# Sender gen Random r and calc x, x to Receiver
r = 43
x = (r ** 2) % n

# Sender calc, sent to Receiver
y1 = r * (s1 ** a1)
y2 = r * (s2 ** a2)
y3 = r * (s3 ** a3)
y4 = r * (s4 ** a4)

# Senser calc, send to Receiver
v1 = (s1 ** 2) % n
v2 = (s2 ** 2) % n
v3 = (s3 ** 2) % n
v4 = (s4 ** 2) % n

# Receiver calc
yv1 = x * (v1 ** a1) % n
yv2 = x * (v2 ** a2) % n
yv3 = x * (v3 ** a3) % n
yv4 = x * (v4 ** a4) % n

# Receiver verify
eq1 = (y1 ** 2) % n == yv1
eq2 = (y2 ** 2) % n == yv2
eq3 = (y3 ** 2) % n == yv3
eq4 = (y4 ** 2) % n == yv4

print('p = {}, q = {}'.format(p, q))
print('n = p * q = {} * {} = {}'.format(p, q, n))

print('s1 = {}'.format(s1))
print('s2 = {}'.format(s2))
print('s3 = {}'.format(s3))
print('s4 = {}'.format(s4))

print('a1 = {}'.format(a1))
print('a2 = {}'.format(a2))
print('a3 = {}'.format(a3))
print('a4 = {}'.format(a4))

print('r = {}'.format(r))
print('x = r^2 mod n = {}^2 mod {}'.format(r, x, n))

print('y1 = r * s1^a1 = {} * {}^{} = {}'.format(r, s1, a1, y1))
print('y2 = r * s2^a2 = {} * {}^{} = {}'.format(r, s2, a2, y2))
print('y3 = r * s3^a3 = {} * {}^{} = {}'.format(r, s3, a3, y3))
print('y4 = r * s4^a4 = {} * {}^{} = {}'.format(r, s4, a4, y4))

print('v1 = s1^2 % n = {}^2 % {} = {}'.format(s1, n, v1))
print('v2 = s2^2 % n = {}^2 % {} = {}'.format(s2, n, v2))
print('v3 = s3^2 % n = {}^2 % {} = {}'.format(s3, n, v3))
print('v4 = s4^2 % n = {}^2 % {} = {}'.format(s4, n, v4))

print('yv1 = x * v1^a1 % n = {} * {}^{} % {} = {}'.format(x, v1, a1, n, yv1))
print('yv2 = x * v2^a2 % n = {} * {}^{} % {} = {}'.format(x, v2, a2, n, yv2))
print('yv3 = x * v3^a3 % n = {} * {}^{} % {} = {}'.format(x, v3, a3, n, yv3))
print('yv4 = x * v4^a4 % n = {} * {}^{} % {} = {}'.format(x, v4, a4, n, yv4))

print('y1^2 mod n = {}^2 mod {} = {}'.format(yv1, n, ((y1 ** 2) % n)))
print('y2^2 mod n = {}^2 mod {} = {}'.format(yv2, n, ((y2 ** 2) % n)))
print('y3^2 mod n = {}^2 mod {} = {}'.format(yv3, n, ((y3 ** 2) % n)))
print('y4^2 mod n = {}^2 mod {} = {}'.format(yv4, n, ((y4 ** 2) % n)))