s=int(input("Enter The Start Point"))

n=int(input("Enter The Last Range"))

for i in range(s,n+1):

    if(i%2!=0):
        print(i,end=", ")