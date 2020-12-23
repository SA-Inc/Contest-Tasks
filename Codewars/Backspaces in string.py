# https://www.codewars.com/kata/5727bb0fe81185ae62000ae3

def clean_string(s):
    stack = []

    for i in range(len(s)):
        if ((len(stack) > 0) and (s[i] == '#')):
            stack.pop()
        elif ((len(stack) == 0) and (s[i] == '#')):
            continue
        else:
            stack.append(s[i])

    return ''.join([str(elem) for elem in stack])
