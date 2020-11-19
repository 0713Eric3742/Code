from math import sqrt
s=str(input())
a=int(s.split()[0])
b=int(s.split()[1])
c=int(s.split()[2])
if b*b-4*a*c > 0 :
    print('Two different roots x1=%d , x2=%d' % ((-b+sqrt(b**2-4*a*c))/(2*a),(-b-sqrt(b**2-4*a*c))/(2*a)))
elif b*b-4*a*c == 0 :
    print('Two same roots x=%d'%((-b+sqrt(b**2-4*a*c))/(2*a)))
else:
    print('No real root')