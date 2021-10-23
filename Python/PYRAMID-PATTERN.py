n = int(input("Enter no. of rows: "))
a = n
for i in range(1, n+1):
    print(' '*a, '* '*i)
    a = a-1
