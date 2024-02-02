def large_box(n, l):
    
    res = 0
    for i in range(len(l)):
        res = res ^ l[i]

    return res


n = int(input())
l = list(map(int, input().split()))

out_ = large_box(n, l)
print(out_)
