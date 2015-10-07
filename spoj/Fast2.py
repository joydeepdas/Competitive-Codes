import math
t=int(input())
for i in range(0,t):
    n=int(input())
    c=1
    c=(pow(2,n+1)-1)%1298074214633706835075030044377087;
    for i in range (0,n-1):
        c=c*2+1
        if(c>1298074214633706835075030044377087):
            c=c%1298074214633706835075030044377087
    print(c)
