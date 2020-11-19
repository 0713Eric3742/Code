b=[]
s=0
def dfs(a):
    if (a>s):
        for i in b:
            print(i,end=' ')
        print()
        return
    for i in range(1,4):
        b.insert(a,i)
        dfs(a+1)
        b.pop(a-1)
s=int(input())
dfs(1)