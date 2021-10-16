def interest(p,t,r=9):
    print("principal=",p)
    print("rate=",r)
    print("time=",t)
    si=(p*r*t)/100
    print(si)
    tt=p+si
    print(tt)
p=12000
r=5
t=5
interest(p,t)
