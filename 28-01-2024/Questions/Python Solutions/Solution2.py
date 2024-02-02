n = int(input())

if n > 5 and n <= 20:
    n1, n2, ev, od = 1, 1, 0, 0

    for i in range(1, n + 1):
        print(n1, end = ' ')

        if n1 % 2 == 0:
            ev += 1
        else:
            od += 1

        s = n1+n2
        n1 = n2
        n2 = s

    print()
    print(ev)
    print(od)
    
else:
    print('INVALID INPUT')