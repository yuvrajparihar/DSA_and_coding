import sys 
from collections import Counter as cc
from copy import deepcopy
import random
from collections import defaultdict as dd
# try:
# For getting input from input.txt file 
sys.stdin = open('D:/vscode/io/input.txt', 'r')  

# Printing the Output to output.txt file 
sys.stdout = open('D:/vscode/io/output.txt', 'w') 

MOD=998244353
N=10000
ans=[0]*10001

def check_Prime(n,f):
    i=2
    flag=0
    a=-1
    temp=0
    while(i*i<=n):
        if(i*i==n):
            temp+=f[i-1]
            flag=1
            if(a==-1):
                a=n//i
        
        elif(n%i==0):
            temp+=f[i-1]
            temp+=f[n//i-1]
            flag=1
            if(a==-1):
                a=n//i
        i+=1
    
    if(flag==0):
        ans[n]= ans[n-1]+1
        return 0
    else:
        ans[n]= ans[n-1]+a*f[(n//a)-1]+(n//a)*f[a-1]+temp
        return a

f=[]

f.append(0)

for i in range(2,N+1):
    
    a=check_Prime(i,f)
    if(a):
        b=a*f[(i//a)-1]+(i//a)*f[a-1]
        f.append(b)
    else:
        f.append(1)


T = int(input())
for _ in range(T):
    L,R= map(int,input().split())
    print(ans[R]-ans[L-1])
# except EOFError:
#     pass
# import math
# sim,intr,street,cars,scores=map(int,input().split())
# mat=[]
# for i in range(street):
#     l=list(map(str,input().split()))
#     mat.append(l)
# paths=[]
# for i in range(cars):
#     l=list(map(str,input().split()))
#     paths.append(l)
# sums=0
# for i in range(cars):
#     loop=int(paths[i][0])
#     for j in range(1,loop):
#         for k in range(len(mat)):
#             if paths[i][j]==mat[k][2]:
#                 sum+=int(mat[k][3])
#                 break