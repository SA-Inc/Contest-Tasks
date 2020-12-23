# https://www.codewars.com/kata/5842df8ccbd22792a4000245

def expanded_form(num):
    s = str(num)
    l = len(s)
    result = []

    for i in range(0, l):
        if (s[i] != '0'):
            p = s[i].ljust(l - i, '0')
            result.append(p)

    return ' + '.join(result)
