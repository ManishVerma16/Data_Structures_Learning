'''
DEQueue -> Double Ended Queue

Here, in DEQueue insertion and deletion can be performed at both the front and rear ends.

'''

class DEQueue:
    def __init__(self):
        self.items = []  # creating an empty list

    def is_empty(self):
        return self.items == []

    def size(self):
        return len(self.items)
    
    def insert_front(self, value):
        self.items.insert(0, value)

    def insert_rear(self, value):
        self.items.append(value)

    def delete_front(self):
        if self.is_empty():
            print("Queue is Empty\n")
        return self.items.pop(0)

    def delete_rear(self):
        if self.is_empty():
            print("Queue is Empty\n")
        return self.items.pop()

    def first(self):
        if self.is_empty():
            print("Queue is Empty\n")
        return self.items[0]

    def last(self):
        if self.is_empty():
            print("Queue is Empty\n")
        return self.items[-1]

    def display(self):
        if self.is_empty():
            print("Queue is Empty\n")
        print("Elements of Queue are: ", self.items)


if __name__ == "__main__":
    q = DEQueue()

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
