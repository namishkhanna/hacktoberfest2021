import csv
f=open("student.csv","w",newline='')
s=csv.writer(f,delimiter=";")
s.writerow(["Roll_no.","Name","Marks"])
l=[]
while True:
    r=int(input("Enter rollno:"))
    n=input("Enter name:")
    m=int(input("Enter marks:"))
    lst=[r,n,m]
    l.append(lst)
    c=input("More records? (y/n)")
    if (c=="n"):
        break
for i in l:
    s.writerow(i)

f.close()
