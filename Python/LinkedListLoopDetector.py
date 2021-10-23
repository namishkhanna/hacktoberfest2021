class Node:
    def __init__(self):
        self.data=0
        self.next=None
        self.flag=0

def push(head_reference,new_data):
    new_node=Node()
    new_node.data=new_data
    new_node.flag=0
    new_node.next=head_reference
    head_reference=new_node
    return head_reference

def loopDetector(reference):
    while reference!=None:
        if reference.flag==1:
            return "Loop Exists"
        reference.flag=1
        reference=reference.next
    return "No Loop Exists"

if __name__ == '__main__':
    head=None

    head=push(head,20)
    head=push(head,4)
    head=push(head,15)
    head=push(head,10)

    '''Creating a loop'''
    head.next.next.next.next=head
    
    print(loopDetector(head))

