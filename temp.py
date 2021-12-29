import sys 
from collections import Counter as cc
from copy import deepcopy
import random
from collections import defaultdict as dd
import math
# try:
# For getting input from input.txt file 
sys.stdin = open('D:/vscode/io/input.txt', 'r')  

# Printing the Output to output.txt file 
sys.stdout = open('D:/vscode/io/output.txt', 'w')

try:
    t=int(input())
    a=[[0 for i in range(20)] for j in range(200005)]
    for i in range(20):
        a[0][i]=1
    for i in range(1,200005):
        for j in range(20):
            if (i&(1<<j)):
                x=0
            else:
                x=1
            a[i][j]=a[i-1][j]+x
    
    for tt in range(1,t+1):
        # n=int(input())
        # a=list(map(int,input().split()))
        x,y=map(int,input().split())
        mx=2**31
        for i in range(20):
            mx=min(mx,a[y][i]-a[x-1][i])
        print(mx)
        
            
        
except EOFError as e:
    pass