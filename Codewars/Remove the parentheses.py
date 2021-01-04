# https://www.codewars.com/kata/5f7c38eb54307c002a2b8cc8

def remove_parentheses(s):
    # res = ''
    # startIdx = None
    # endIdx = None
    # for i in range(len(s)):
    #     if s[i] == '(':
    #         startIdx = i
    #         break
    # for i in reversed(range(len(s))):
    #     if s[i] == ')':
    #         endIdx = i
    #         break
    # for i in range(len(s)):
    #     if i >= startIdx and i <= endIdx:
    #         continue
    #     else:
    #         res += s[i]
    # return res

    # isSkip = False
    # for i in range(len(s)):
    #     if s[i] == '(':
    #         isSkip = True
    #     if s[i] == ')':
    #         isSkip = False
    #         continue
    #     if isSkip == False:
    #         res += s[i]
    # return res

    parenthesesCount = 0
    res = ''
    for i in s:
        if i == '(':
            parenthesesCount += 1 
        elif i == ')':
            parenthesesCount -= 1 
        else:
            if parenthesesCount == 0:
                res += i 
    return res
