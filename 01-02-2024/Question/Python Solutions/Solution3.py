import math

def fare(s,d):#NI-6,HA-3
    path=[800,600,750,900,1400,1200,1100,1500]
    
    stop=['TH','GA','IC','HA','TE','LU','NI','CA']
    
    res=0
    
    st=stop.index(s)#6
    
    ed=stop.index(d)#3
    
    while st!=ed:#7!=3
        st=(st+1)%8#7,0
        res=res+path[st]#path[7],path[0]
        
    return math.ceil(res/200)

s=input()#NI
d=input()#HA

s=s.upper()
d=d.upper()

if s==d:
    print('INVALID INPUT')
else:
    print("%.1f"%fare(s,d),'INR')
