/*
 * @lc app=leetcode.cn id=641 lang=cpp
 *
 * [641] 设计循环双端队列
 */

// @lc code=start
class MyCircularDeque {
    //始终预留一个位置，为了区分队列为空或者队列满
    //前插入、后删除、getRear() + cacapacity防止越界
private:
    vector<int> array;
    int front;
    int rear;
    int capacity;
public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        capacity =k + 1;
        array.assign(capacity, 0);
        front = 0;
        rear = 0;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(isFull()) return false;
        //为了循环到数组队尾
        front = (front - 1 + capacity) % capacity;
        array[front] = value;
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(isFull()) return false;
        array[rear] = value;
        rear = (rear + 1) % capacity;
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(isEmpty()) return false;
        front = (front + 1) % capacity;
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(isEmpty()) return false;
        rear = (rear - 1 + capacity) % capacity;
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(isEmpty()) return -1;
        return array[front];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        //rear为0时防止数组越界
        if(isEmpty()) return -1;
        return array[(rear - 1 + capacity) % capacity];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return front == rear;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return (rear + 1) % capacity == front;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
// @lc code=end

