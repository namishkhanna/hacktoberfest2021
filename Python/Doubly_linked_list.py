class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
        self.prev=None
        
class LL:
    def __init__(self):
        self.head=None
        self.tail=None
        self.len=0
    
    def append(self,value):
        newNode=Node(value)
        if self.head==None:
            self.head=newNode
            self.tail=newNode
        else:
            self.tail.next=newNode
            newNode.prev=self.tail
            self.tail=newNode
        self.len+=1
    
    def deleteFromBegin(self):
        deleteNode=self.head
        self.head=self.head.next
        self.head.prev=None
        del deleteNode
        self.len-=1
    
    def deleteFromEnd(self):
        deleteNode=self.tail
        self.tail=self.tail.prev
        self.tail.next=None
        del deleteNode
        self.len-=1
    
    def deleteIndex(self,pos):
        if pos==0:
            return self.deleteFromBegin()
        if pos==self.len-1:
            return self.deleteFromEnd()
        if pos>=self.len or pos<0:
            print("Index out of range")
            return
        count=0
        node=self.head
        while count<pos-1:
            node=node.next
            count+=1
        deleteNode=node.next
        node.next=node.next.next
        node.next.prev=node
        del deleteNode
        self.len-=1

    def display(self):
        node=self.head
        while node!=None:
            print(node.data,end=" ")
            node=node.next
        print()
    
    def displayReverse(self):
        node=self.tail
        while node!=None:
            print(node.data,end=" ")
            node=node.prev
        print()

if __name__=="__main__":
    linkedList=LL()
    while True:
        option=int(input("\n1-Append Value\n2-Delete From Beginning\n3-Delete From End\n4-Delete Element At Position\n5-Display\n6-Display Reverse\n7-End\n"))
        if option==1:
            linkedList.append(int(input("Value to be added: ")))
        elif option==2:
            linkedList.deleteFromBegin()
        elif option==3:
            linkedList.deleteFromEnd()
        elif option==4:
            linkedList.deleteIndex(int(input("Position: ")))
        elif option==5:
            linkedList.display()
        elif option==6:
            linkedList.displayReverse()
        else:
            break
