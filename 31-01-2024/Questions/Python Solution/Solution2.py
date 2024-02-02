s = input()#hello welcome#hll wlcm

flag = 1

d = {'a':0,'e':0,'i':0,'o':0,'u':0}

if len(s) > 0:
    string = ''

    for i in range(len(s)):
        if s[i]=='a' or s[i]=='A':
            d['a']=d['a']+1#d['a']=0+1=1
        elif s[i]=='e' or s[i]=='E':
            d['e']=d['e']+1
        elif s[i]=='i' or s[i]=='I':
            d['i']=d['i']+1
        elif s[i]=='o' or s[i]=='O':
            d['o']=d['o']+1
        elif s[i]=='u' or s[i]=='U':
            d['u']=d['u']+1
        elif s[i]>='0' and s[i]<='9':
            flag=0
            break
        else:
            string=string+s[i]

    if len(s)==len(string):
        flag=0

    if flag==1:
        for i,j in d.items():
            print(i+':'+str(j))
        print(string)
    else:
        print('0')
        
elif s=='':
    print('INVALID INPUT')