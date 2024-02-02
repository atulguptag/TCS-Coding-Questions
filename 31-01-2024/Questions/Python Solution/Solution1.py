s=input()
length=0
count=0

while s!='q' and s!='Q':
    length+=1
    i=0
    if len(s)==10:
        for i in range(len(s)):
            if not(s[i]>='0' and s[i]<='9'):
                count+=1
                break
    elif len(s)>10:
        count+=1
    s=input()
if length==5:
    print(count)
else:
    print('INPUT LIMIT IS 5')