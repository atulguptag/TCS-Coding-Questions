cpi = 18
cpe = 12
cost = 0

ni = int(input()) 
ne = int(input())

if(ni<0 or ne<0):
    print("INVALID INPUT")

elif(ni==0 and ne==0):
    print("Total estimated Cost : 0.0 INR")

else:
    for i in range(ni):
        temp=float(input())
        cost+= cpi*temp

    for i in range(ne):
        temp=float(input())
        cost+= cpe*temp
        
    print("Total estimated Cost : %.1f INR"%cost)