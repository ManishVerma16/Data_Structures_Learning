# Implementing Queue using Python liq

class Queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return self.items == []
    
    def size(self):
        return len(self.items)

    def enqueue(self, value):
        return self.items.append(value)

    def dequeue(self):
        if self.is_empty():
            print("Queue is Empty")
        else:
            return self.items.pop(0)

    def peek(self):
        if self.is_empty():
            print("Queue is Empty")
        else:
            return self.items[0]

    def display(self):
        print("Elements in Queue are: ",self.items)

if __name__ == "__main__":
    q = Queue()

    while True:
        print('''1. Enqueue \n2. Dequeue \n3. Size of Queue \n4. Display \n5. Exit \n
        ''')

        choice = int(input("Enter your choice: "))

        if choice == 1:
            x = int(input("Enter the element to be pushed: "))
            q.enqueue(x)
        elif choice == 2:
            x = q.dequeue()
            print("Popped Element is: ",x)
        elif choice == 3:
            print("Size of qack: ", q.size())
        elif choice == 4:
            q.display()
        elif choice == 5:
            break
        else:
            print("Wrong choice")
        print()