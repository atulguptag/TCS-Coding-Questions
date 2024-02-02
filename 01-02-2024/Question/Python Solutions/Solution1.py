l = [['ABSENT' for i in  range(2)] for j in range(5)]

while True:
    s = input()

    if len(s) == 0:
        break

    if s[1] != 'Y' or s[2] != '0' or int(s[3]) - 1 > 5:
        print('INVALID OPTION')
        break

    if s[0] != 'T' and s[0] != 'S':
        print('INVALID OPTION')
        break

    if s[0] == 'T':
        c = 0

    else:
        c = 1

    l[int(s[3]) -1][c] = s
    
for i in range(5):
    print('[' + str(l[i][0]) + '] ' + ' [' + str(l[i][1]) +']')