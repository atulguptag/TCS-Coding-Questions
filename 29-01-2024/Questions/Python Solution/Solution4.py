def leaders(n, l):
    print(l[n - 1], end=' ') #1

    mx = l[n - 1] #1

    for i in range(n - 2, -1, -1): #2, 1, 0
        if l[i] > mx: #5 > 1 - t, 3 > 5 - f, 8 > 5 - t
            mx = l[i] #5, 8
            print(mx, end=' ') #5, 8

n = int(input()) #4
l = list(map(int, input().split())) #8 3 5 1

out_ = leaders(n, l)
print(out_)