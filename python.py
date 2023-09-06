import math
n=int(input("HELLO"))
deltx=(2-0)/n
h=deltx/2
print(h)
list=[]
x=0
for i in range(n):
    x=(x+deltx)
    list.append(math.sin(pow(x,2)))
print(list)
suma=0
suma=sum(list)
inter=h*suma
print(suma)
print(inter)
print(math.sin(2))
8