ope = ['', '+', '-', '*', '/']

ope2 = ['+', '-', '*', '/']

def dfs(num, s, n):
    if n == 3:
        for i in range(len(s) - 1):
            if s[i] == '/' and s[i+1] == '0':
                return
            if s[i] == '0' and not ope2.count(s[i+1]):
                return
            if len(s) <= 4:
                return
        if str(num)[::-1] == str(eval(s)):
            print(num)
        return
    for i in range(5):
        t = s + ''
        t += ope[i]
        t += str(num)[n+1]
        dfs(num, t, n+1)

for i in range(1000, 10000):
    dfs(i, str(i//1000), 0)