'''
1. To implement queue using circular linked we need to maintain only
one reference pointer that is rear pointer.

2. Enqueue operation can be done using front end reference and Dequeue operation
can be done using rear end reference in constant time.

'''


class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

class Queue:
    def __init__(self):
        self.front = None
        self.rear = None
        self.queue_size = 0

    def is_empty(self):
        return self.front == None

    def size(self):
        return self.queue_size

    def enqueue(self, value):
        node = Node(value)
        self.queue_size += 1

        if self.front == None:
            self.front = self.rear = node
        else:
            self.rear.next = node
            self.rear = node

    def dequeue(self):
        if self.is_empty():
            print("Queue is Empty")
        else:
            value = self.front.data
            self.front = self.front.next
            self.queue_size -= 1
            return value
    
    def peek(self):
        if self.is_empty():
            print("Queue is Empty")
        else:
            return self.front.data

    def display(self):
        p = self.front
        print("Elements of Queue are: ", end="")
        while p is not None:
            print(p.data, end=" ")
            p = p.next
        print("\n")

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
