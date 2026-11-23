class MyCircularDeque {
    private:
    vector<int> data;
    int front;
    int count;
    int capacity;

public:
    MyCircularDeque(int k) {
        data.resize(k);
        capacity=k;
        front =0;
        count=0;
    }
    
    bool insertFront(int value) {
        if(isFull())return false;
        front = (front -1 + capacity) % capacity;
        data[front] = value;
        count++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull())return false;
        int rear = (front + count)%capacity;
        data[rear] = value;
        count++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        front = (front + 1)% capacity;
        count--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        count--;
        return true;
    }
    
    int getFront() {
        if(isEmpty()) return -1;
        return data[front];
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        return data[(front + count -1) % capacity];
    }
    
    bool isEmpty() {
        return count ==0;
    }
    
    bool isFull() {
        return count == capacity;
    }
};