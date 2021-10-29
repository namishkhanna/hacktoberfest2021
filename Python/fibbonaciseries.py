l = int(input("Enter Total Terms You Want To Print: "))

n1, n2 = 0, 1
count = 0

if l <= 0:
   print("Please enter a positive integer")

elif l == 1:
   print("Fibonacci sequence: ")
   print(n1)

else:
   print("Fibonacci sequence:")

   while count < l:
       print(n1,end=", ")
       temp = n1+n2
       n1 = n2
       n2 = temp
       count += 1