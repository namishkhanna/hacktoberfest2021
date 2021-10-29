upper = int(input("enter ending no :"))
y=[]

for num in range(1, upper + 1):
    if(num%2==0):
        y.append(num)

    else:
        y.append(-num)

print(y)