class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

class Stack:
    def __init__(self):
        self.top = None

    def is_empty(self):
        return self.top == None

    def size(self):
        if self.is_empty():
            return 0
        else:
            count = 0
            p = self.top
            while p is not None:
                count += 1
                p = p.link
            return count

    def push(self, value):
        node = Node(value)
        node.next = self.top
        self.top = node

    def pop(self):
        if self.is_empty():
            print("Stack is empty\n")
        else:
            popped_value = self.top.data
            self.top = self.top.next
            return popped_value

    def peek(self):
        if self.is_empty():
            print("Stack is empty\n")
        else:
            return self.top.data

    def display(self):
        p = self.top
        print("Stack elements are: ", end="")

        while p is not None:
            print(p.data, end=" ")
            p = p.next

if __name__ == "__main__":
    st = Stack()

    while True:
        print('''1. Push \n2. Pop \n3. Peek \n4. Size of Stack \n5. Display \n6. Exit \n
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