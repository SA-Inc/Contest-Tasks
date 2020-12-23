https://www.codewars.com/kata/5ef9ca8b76be6d001d5e1c3e

def encode(string):
    bits = ''

    for char in string:
        bin = format(ord(char), '08b')
        for bit in bin:
            bits += bit * 3
    return bits

def correctBit(triple):
    zeros = 0
    ones = 0

    for bit in triple:
        if (bit == '0'):
            zeros += 1
        else:
            ones += 1
    return '0' if zeros > ones else '1'

def decode(bits):
    string = ''
    bistArr = [bits[i:i + 3] for i in range(0, len(bits), 3)]
    tmpByte = ''
    index = 0

    for part in bistArr:
        bit = correctBit(part)
        tmpByte += bit
        index += 1

        if (index == 8):
            string += chr(int(tmpByte, 2))
            tmpByte = ''
            index = 0

    return string
