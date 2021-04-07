class Stack:
    def __init__(self, max_size=5):
        self.items = [None]*max_size
        self.count = 0
    
    def is_empty(self):
        return self.count == 0

    def is_full(self):
        return self.count == len(self.items)    

    def size(self):
        return self.count      

    def push(self, value):
        if self.is_full():
            print("Stack is full")
        else:
            self.items[self.count] = value
            self.count += 1
    
    def pop(self):
        if self.is_empty():
            print("Stack is empty!")
        else:
            value = self.items[self.count-1]
            self.items[self.count-1] = None
            self.count -= 1
            return value

    def peek(self):
        if self.is_empty():
            print("Stack is full") 
        else:
            return self.items[self.count-1]

    def display(self):
        print("Stack elements are: ", self.items)


if __name__ == "__main__":
    size = int(input("Enter the size of stack you want: "))

    st = Stack(size)

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