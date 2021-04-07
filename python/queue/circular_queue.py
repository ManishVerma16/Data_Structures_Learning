# Circular Queue using list
from typing import ItemsView


class Queue:
    def __init__(self, max_size=5):
        self.front = 0
        self.count = 0
        self.items = [None] * max_size

    def is_empty(self):
        return self.count == 0

    def size(self):
        return self.count

    def enqueue(self, value):
        if self.count == len(self.items):
            print("Queue is Full\n")
            # self.resize
        else:
            i = (self.front + self.count) % len(self.items)
            self.items[i] = value
            self.count += 1
            

    def dequeue(self):
        if self.is_empty():
            print("Queue is empty\n")
        else:
            value = self.items[self.front]
            self.items[self.front] = None
            self.front = (self.front + 1)% len(self.items)
            self.count -= 1
            return value

    def peek(self):
        if self.is_empty():
            print("Queue is empty\n")
        else:
            return self.items[self.front]


    def display(self):
        print("Element in Queue are: ", self.items)

if __name__ == "__main__":
    size = int(input("Enter the size of stack you want: "))

    q = Queue(size)

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


'''
self.items[self.count] = value
            self.count = (self.count + 1)% len(self.items)
            # self.count += 1
            print(self.count)

print(self.count)
            
'''