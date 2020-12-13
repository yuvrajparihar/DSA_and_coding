
# cook your dish here
import sys
# For getting input from input.txt file
sys.stdin = open('D:/OneDrive/vscode/io/input.txt', 'r')

# Printing the Output to output.txt file
sys.stdout = open('D:/OneDrive/vscode/io/output.txt', 'w')



def getSum(n):

    sum = 0
    while(n > 0):
        sum += int(n % 10)
        n = int(n/10)

    return sum




n = int(input())
k = int(input())
a=[]
i=n+1
while len(a)<k:
    if getSum(i)%5==0:
        a.append(i)
    i+=1

print(a)   

   
