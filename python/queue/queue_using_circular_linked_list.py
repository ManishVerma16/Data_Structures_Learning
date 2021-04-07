'''
1. To implement queue using circular nexted we need to maintain only
one reference pointer that is rear pointer.

2. Both enqueue and dequeue operations can be done in a constant time.

'''

from typing import TYPE_CHECKING


class Node:
    def __init__(self, value):
        self.data = value
        self.next = None
    
    
class Queue:    
    def __init__(self):
        self.rear = None

    def is_empty(self):
        return self.rear == None

    def size(self):
        if self.is_empty():
            return 0
        count = 0
        p = self.rear.next
        while True:
            count += 1
            p = p.next
            if p == self.rear.next:
                break
        return count
    
    def enqueue(self, value):
        node = Node(value)

        if self.rear == None:
            self.rear = node
            self.rear.next = self.rear
        else:
            node.next = self.rear.next
            self.rear.next = node
            self.rear = node

    def dequeue(self):
        if self.is_empty():
            print("Queue is Empty!\n")
        else:
            value = self.rear.next.data
            self.rear.next = self.rear.next.next
            return value

    def peek(self):
        if self.is_empty():
            print("Queue is Empty!\n")
        else:
            return self.rear.next.data

    def display(self):
        p = self.rear.next
        print("Elements of Queue are: ", end="")
        while True:
            print(p.data, end=" ")
            p = p.next
            if p == self.rear.next:
                break
        print()

if __name__ == "__main__":
    q = Queue()

    while True:
        print('''1. Enqueue \n2. Dequeue \n3. Size of Queue \n4. Peek \n5. Display \n6. Exit \n
        ''')

        choice = int(input("Enter your choice: "))

        if choice == 1:
            x = int(input("Enter the element to be insert: "))
            q.enqueue(x)
        elif choice == 2:
            x = q.dequeue()
            print("Deleted Element is: ",x)
        elif choice == 3:
            print("Size of queue: ", q.size())
        elif choice == 4:
            print("Element on top is: ", q.peek())
        elif choice == 5:
            q.display()
        elif choice == 6:
            break
        else:
            print("Wrong choice")
        print()



