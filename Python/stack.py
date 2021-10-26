
st=[]
c='y'
while c=='y':
    print("(1)    Enter Employee details")
    print("(2)    Delete Employee details")
    print("(3)    Display Employee details")
    ch=int(input("Enter function choice: "))
    if (ch==1):
        a=int(input("Enter employee_id : "))
        b=input("Ener employee_name: ")
        j=[]
        j.append(a)
        j.append(b)
        st.append(j)
    elif (ch==2):
        if st==[]:
            print("Record not found")
        else:
            print("Deleted eployee details are",st.pop())
    elif (ch==3):
        for i in range(len(st)-1,-1,-1):
            print(st[i])
    else:
        print("Input not in menu.")
    k=input("Continue? (y/n) ")
    if (k=='n'):
        break
