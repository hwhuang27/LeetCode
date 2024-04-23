class MyStack:
    def __init__(self):
        self.q = []    # queue to store stack values

    def push(self, x: int) -> None:
        self.q.append(x)

    def pop(self) -> int:
        size = len(self.q)
        for i in range(size-1):
            self.q.append(self.q[i])

        for i in range(size-1):
            self.q.pop(0)
        
        value = self.q[0]
        self.q.pop(0)
        return value
        
    def top(self) -> int:
        return self.q[-1]

    def empty(self) -> bool:
        return len(self.q) == 0
        
'''
    pop()
    [1, 2, 3]
    [1, 2, 3, 1, 2]
    [3, 1, 2]
    [1, 2]
    return 3
    
    can only use 
        list.append()
        list[0]
        len(list)
        list
'''

# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()