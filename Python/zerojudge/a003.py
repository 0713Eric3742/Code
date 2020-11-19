a=str(input())
b=int(a.split()[0])
c=int(a.split()[1])
d=(b*2+c)%3
if d==0:
    print('普通')
if d==1:
    print('吉')
if d==2:
    print('大吉')