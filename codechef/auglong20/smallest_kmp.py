# cook your dish here
import sys
# For getting input from input.txt file
sys.stdin = open('D:/OneDrive/vscode/io/input.txt', 'r')

# Printing the Output to output.txt file
sys.stdout = open('D:/OneDrive/vscode/io/output.txt', 'w')


# cook your dish here
# cook your dish here
t=int(input())
for _ in range(t):
    s=input()
    p=input()
    temp=p[0]*len(p)
    s=list(s)
    word=list(p)
    
    for i in word:
        s.remove(i)
    s.append(p)
    
    s.sort()

    if p[0] in s and len(word)>1 and temp>p:
        x=s[s.index(p[0]):s.index(p)+1]
        x.sort(reverse=True)
        s=s[:s.index(p[0])]+x+s[s.index(p)+1:]
        
    for j in s:
        print(j,end="")
    print() 