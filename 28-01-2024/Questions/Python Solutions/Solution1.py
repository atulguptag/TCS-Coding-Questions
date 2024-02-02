n=int(input())
flag=1

if n<=10:
    normal,senior=0,0
    for i in range(n):
        age=int(input())
        if age>=10 and age<=100:
            if age>60 and senior<5:
                senior+=1
            else:
                normal+=1
        else:
            flag=0
            break
else:
    flag=0

if flag==0:
    print('INVALID INPUT')
else:
    print('QUEUE1 TIME:',normal*15,'mins')
    print('QUEUE2 TIME:',senior*15,'mins')