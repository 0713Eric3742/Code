a=int(input())
for i in range(a):
    b=str(input())
    c=float(b.split()[1])/float(b.split()[0])
    d=float(b.split()[2])/float(b.split()[1])
    if(c==d):
        for i in range(len(b.split())):
            print(b.split()[i],end=' ')
        print(int(float(b.split()[3])*c))
    else:
        for i in range(len(b.split())):
            print(b.split()[i],end=' ')
        print(int(float(b.split()[3])+float(b.split()[2])-float(b.split()[1])))