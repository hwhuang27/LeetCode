class MyStack {
public:
    std::queue<int> q1;
    std::queue<int> q2;
    bool queueOne = true;

    MyStack() {
        
    }
    
    void push(int x) {
        int front{0};
        if(queueOne){
            q2.push(x);
            while(!q1.empty()){
                front = q1.front();
                q2.push(front);
                q1.pop();
            }
            queueOne = false;
        } else{
            q1.push(x);
            while(!q2.empty()){
                front = q2.front();
                q1.push(front);
                q2.pop();
            }
            queueOne = true;
        }
    }
    
    int pop() {
        int front{0};
        if(queueOne){
            front = q1.front();
            q1.pop();
        } else {
            front = q2.front();
            q2.pop();         
        }
        return front;
    }
    
    int top() {
        return queueOne ? q1.front() : q2.front();
    }
    
    bool empty() {
        return queueOne ? q1.empty() : q2.empty();
    }

};

/*
    tc: O(n)

    [1,2,3,4]

    []
    [4,3,2,1]

*/


/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */