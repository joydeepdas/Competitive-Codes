import math
import sys


m=1000000000
t=int(input())
for i in range(0,t):
    mi,p = map(float,sys.stdin.readline().split())
    if(mi==0):
        print ("0.00"+" "+"0.00")
        continue
    elif(p==0):
        print ("0.00"+" "+"0.00")
        continue
    elif(p==1):
        print ("500000000.0"+" "+ "500000000.0")
        continue
    else:
        b=m*pow(p,mi-1)
        c=m-b
        print((str)(b)+" "+(str)(c))
