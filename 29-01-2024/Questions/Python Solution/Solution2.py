l = []
i = 0
income = 0
flag = 1

while True:
    val = input()

    if val == '':
        break
    else:
        l.append(int(val))

    if l[i]<1 or l[i]>120:
        flag=0
        break

    elif l[i]<17:
        income+=200
    
    elif l[i]<=40:
        income+=400
    
    else:
        income+=300
    
    i=i+1
    
    if i==20:
        flag=0
        break

if flag==0:
    print('INVALID INPUT')

else:
    print('Total income '+str(income)+' INR')