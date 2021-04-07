# Program to create stack with some basic operation
class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return self.items == []

    def size(self):
        return len(self.items)

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if self.is_empty():
            print("Stack is Empty!\n")
        else:
            return self.items.pop()
    
    def peek(self):
        if self.is_empty():
            print("Stack is Empty!\n")
        else:
            return self.items[-1]

    def display(self):
        print("Stack elments are: ",self.items)


if __name__ == "__main__":
    st = Stack()
    
    while True:
        print('''1. Push \n2. Pop \n3. Peek \n4. Size \n5. Display \n6. Exit \n
        ''')

        choice = int(input("Enter your choice: "))

        if choice == 1:
            x = int(input("Enter the element to be pushed: "))
            st.push(x)
        elif choice == 2:
            x = st.pop()
            print("Popped Element is: ",x)
        elif choice == 3:
            print("Element on top is: ", st.peek())
        elif choice == 4:
            print("Size of stack: ", st.size())
        elif choice == 5:
            st.display()
        elif choice == 6:
            break
        else:
            print("Wrong choice")
        print()
    
    
