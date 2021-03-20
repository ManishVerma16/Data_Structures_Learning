class Node:
    def __init__(self,value):
        self.data = value
        self.next = None

class SingleLinkedList:
    def __init__(self):
        self.first = None
        self.last = None

    def displayList(self):
        if self.first is None:
            print('List is empty')
        else:
            p = self.first
            while p is not None:
                print(p.data, ' ', end='')
                p = p.next
            print()

    def createList(self):
        n = int(input('Enter the number of node: '))
        if n == 0:
            return
        for i in range(n):
            data = int(input('Enter element to be inserted: '))
            temp = Node(data)
            if self.first is None:
                self.first = temp
                self.last = temp
            else:
                self.last.next = temp
                self.last = temp

                
    def search(self, x):
        pos = 0
        if self.first is None:
            print('List is empty')
        else:
            p = self.first
            while p is not None:
                if p.data == x:
                    print(x, 'is found at ', pos)
                pos += 1
                p = p.next
            else:
                print(x, 'is not found ')





newList = SingleLinkedList()
newList.createList()
newList.displayList()
newList.search(4)
            