def rep(s):
    res = list(s)
    for i in range(len(res)):
        if res[i] == ' ':
            res[i] = '%20'
    s = ''.join(res)
    return s

if __name__ == '__main__':
    s = 'We are harrpy.'
    print(rep(s))
