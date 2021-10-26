import csv
def write():
    f=open("product.csv","w",newline='')
    wobj=csv.writer(f)
    wobj.writerow(["Product_ID","Product_Name","Cost","Qty"])
    rec=[]
    while True:
        pid=input("Enter product ID:")
        pname=input("Enter product name:")
        cost=int(input("Enter product cost:"))
        Qty=int(input("Enter quantity:"))
        k=[pid,pname,cost,Qty]
        rec.append(k)
        c=input("Do you want to enter more products?(y/n)")
        if (c=="n"):
            break
    wobj.writerows(rec)
    f.close()

def read():
    f=open("product.csv","r")
    robj=csv.reader(f)
    for i in robj:
        print(i)
    f.close()

def search():
    print("Searching for a particular item.")
    f=open("product.csv","r")
    robj=csv.reader(f)
    found=0
    srch=input("Enter product's quantity which is to be searched:")
    for i in robj:
        if (i[3]==srch):
            print("Product found")
            print(i)
            found=1
            break

    if (found==0):
        print("Product not found")
    f.close()

def copy():
    f1=open("Pro1.csv","w")
    recd=[]
    wob=csv.writer(f1)
    wob.writerow(["Product_ID","Product_Name","Cost","Qty"])
    recd.append(i)

write()
read()
search()
