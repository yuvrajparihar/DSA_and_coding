import sys 
# For getting input from input.txt file 
sys.stdin = open('D:/OneDrive/vscode/io/input.txt', 'r')  
  
# Printing the Output to output.txt file 
sys.stdout = open('D:/OneDrive/vscode/io/output.txt', 'w') 

import math
k=int(input())
t=int(input())
while(t>0):
    n=int(input())
    if k==1:
        if n%4==0:
            print("0")
            A=''
            for i in range(n//4):
                A+='10'
            A+=A[::-1]
            print(A)
        elif n%2==0:
            print('1')
            if n==2:
                print('10')
                continue
            A=''
            for i in range(n//4):
                A+='10'
            A+='10'+A[::-1]
            print(A)
        else:
            if n==1:
                print('1')
                print('1')
                continue
            W=n*(n+1)/2
            x=(-1+math.sqrt(1+4*W))/2
            if W%2==0:
                print('0')
                if (x).is_integer():
                    A=''
                    x=int(x)
                    for i in range(x):
                        A+='1'
                    for i in range(x,n):
                        A+='0'
                    print(A)
                    
                else:
                    A=''
                    x=int(x)
                    sm=0
                    for i in reversed(range(n+1)):
                        sm+=i
                        if sm>W//2:
                            sm-=i
                            break
                        A+='1'
                    m=W//2-sm
                    B=''
                    for j in range(1,i+1):
                        if j == m :
                            B+='1'
                        else:
                            B+='0'
                    B+=A
                    print(B)
            else:
                A=''
                print('1')
                x=int(x)
                sm=0
                for i in reversed(range(n+1)):
                    sm+=i
                    if sm>W//2:
                        sm-=i
                        break
                    A+='1'
                m=W//2-sm
                B=''
                for j in range(1,i+1):
                    if j == m :
                        B+='1'
                    else:
                        B+='0'
                B+=A
                print(B)
    t-=1