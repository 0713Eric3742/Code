import random
l = ["前面", "後面"]
a = 0
b = 0
for i in range(1000000000):
    ans = int(random.randint(0, 1))
    if ans == 0:
        a += 1
    else:
        b += 1
print(a,b)
