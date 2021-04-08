# Double ended queue using circular linked list

from typing import ItemsView


class DEQueue:
    def __init__(self, max_size):
        self.items = [None] * max_size
        self.front = 0
        self.count = 0

    def is_empty(self):
        return self.count == 0

    def size(self):
        return self.count

    def insert_front(self, value):
        if self.count == len(self.items):
            self.resize(2*len(self.items))
        else:
            self.front = (self.front - 1)%len(self.items)
            self.items[self.front] = value
            self.count += 1

    def insert_rear(self, value):
        if self.count == len(self.items):
            self.resize(2*len(self.items))
        else:
            i = (self.front + self.count)%len(self.items)
            self.items[i] = value
            self.count += 1

    def delete_front(self):
        if self.is_empty():
            print("Queue is Empty\n")
        else:
            value = self.items[self.front]
            self.items[self.front] = None
            self.front = (self.front + 1)% len(self.items)
            self.count -= 1
            return value

    def delete_rear(self):
        if self.is_empty():
            print("Queue is Empty\n")
        else:
            rear = (self.front + self.count -1) % len(self.items)
            value = self.items[rear]
            self.items[rear] = None
            self.count -= 1
            return value

    def first(self):
        if self.is_empty():
            print("Queue is Empty\n")
        else:
            return self.items[self.front]
    
    def last(self):
        if self.is_empty():
            print("Queue is Empty\n")
        else:
            rear = (self.front + self.count -1) % len(self.items)
            return self.items[rear]

    def display(self):
        print(self.items)

    def resize(self, newsize):
        old_list = self.items
        self.items = [None] * newsize
        i = self.front
        for j in range(self.count):
            self.items[j] = old_list[i]
            i = (i+1)%len(old_list)
        self.front = 0

if __name__ == "__main__":

    size = int(input("Enter the size of stack you want: "))

    q = DEQueue(size)

    while True:
        print('''1. Enqueue from front \n2. Enqueue from rear \n3. Dequeue from front \n4. Dequeue from rear \n5. First Element \n6. Last Element \n7. Size of Queue \n8. Display \n9. Exit \n
        ''')

        choice = int(input("Enter your choice: "))

        if choice == 1:
            x = int(input("Enter the element to be insert from front: "))
            q.insert_front(x)
        elif choice == 2:
            x = int(input("Enter the element to be insert form rear: "))
            q.insert_rear(x)
        elif choice == 3:
            x = q.delete_front()
            print("Deleted Element from front is is: ",x)
        elif choice == 4:
            x = q.delete_rear()
            print("Deleted Element from front is is: ",x)
        elif choice == 5:
            print("Element on first is: ", q.first())
        elif choice == 6:
            print("Element on last is: ", q.last())
        elif choice == 7:
            print("Size of queue: ", q.size())
        elif choice == 8:
            q.display()
        elif choice == 9:
            break
        else:
            print("Wrong choice")
        print()


