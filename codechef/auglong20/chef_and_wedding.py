# cook your dish here
import sys
# For getting input from input.txt file
sys.stdin = open('D:/OneDrive/vscode/io/input.txt', 'r')

# Printing the Output to output.txt file
sys.stdout = open('D:/OneDrive/vscode/io/output.txt', 'w')

# cook your dish here
 
def kharcha(l,n, k,x):
    realcost=1000000
    for j in range(2,x):
        check = [0]
        newlist = 0
        for i in range(1, n):
            newlist = arguement(l[check[-1]:i+1])
            if newlist > j:
                check.append(i)
        tables = len(check)

        check.append(n)

        targ = 2*(tables-1) + arguement(l[check[-2]:check[-1]])
        cost = (k*tables) + targ
        if cost<realcost:
            realcost=cost
    return realcost
    
def arguement(a):
    aset = set(a)
    rep = 0
    for i in aset:
        x = a.count(i)
        if x > 1:
            rep += x
    return rep


t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    l = list(map(int, input().split()))

    check = [0]
    newlist = []
    for i in range(1, n):
        newlist = l[check[-1]:i+1]
        if newlist.count(l[i]) > 1:
            check.append(i)
    tables = len(check)
    value=tables
    check.append(n)
    targ = 0
    cost = (k*tables)
    tables -= 1
    while tables > 0:
        arg = n
        temp2=0
        for z in range(len(check)-2):
            temp = arguement(l[check[z]:check[z+2]])
            if temp < arg:
                arg = temp
                temp2 = z
        targ += arg
        targ-= ((arguement(l[check[temp2]:check[temp2+1]])) + (arguement(l[check[temp2+1]:check[temp2+2]])))
        if cost > ((k*tables)+targ):
            cost = (k*tables)+targ
        del check[temp2+1]
        tables -= 1
    print(min(cost,kharcha(l,n,k,value)))
