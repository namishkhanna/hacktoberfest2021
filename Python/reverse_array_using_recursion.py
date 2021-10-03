def display(a, l):
    if l<0:
        return
    print(a[l], end=' ')
    display(a, l-1)

t = int(input())
for i in range(t):
    n = int(input())
    a = str(input())
    a = a.split(' ')
    for j in range(0, len(a)):
        a[j] =int(a[j])
    display(a, len(a)-1)
    print()
