# Implementing Queue using Python liq

class Queue:
    def __init__(self):
        self.items = []
        self.front = 0

    def is_empty(self):
        return self.items == []
    
    def size(self):
        return len(self.items)-self.front

    def enqueue(self, value):
        return self.items.append(value)

    def dequeue(self):
        if self.is_empty():
            print("Queue is Empty")
        else:
            value = self.items[self.front]
            self.items[self.front] = None
            self.front += 1
            return value

    def peek(self):
        if self.is_empty():
            print("Queue is Empty")
        else:
            return self.items[self.front]

    def display(self):
        print("Elements in Queue are: ",self.items)

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