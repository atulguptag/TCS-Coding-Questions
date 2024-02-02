b = int(input())
m = int(input())

filled = 0
count = 0 
flag = 1
mn_cap = b * 0.80

if m > b:
    flag = 0
else:
    while filled < mn_cap:
        temp = int(input())
        if temp > m or temp < 0:
            flag = 0
            break
        else:
            filled += temp
            count += 1
            
if flag == 0:
    print('INVALID INPUT')
else:
    print('BUCKET FULL\nNUMBER OF MUGS:',count)
