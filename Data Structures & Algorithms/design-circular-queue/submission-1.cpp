class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int x)
    {
        val= x;
        next= nullptr;
    }
};

class MyCircularQueue {
public:
    int size=0;
    int maxcapacity=0;
    ListNode* temp;
    ListNode* start;

    MyCircularQueue(int k) {
        size= k;
        maxcapacity=k;
        temp= nullptr;
        start= nullptr;
    }
    
    bool enQueue(int value) {
        if(size==0)
        {
            return false;
        }

        if(temp == nullptr)
        {
            temp= new ListNode(value);
            start= temp;
        }
        else{
            temp->next= new ListNode(value);
            temp= temp->next;
        }

        size--;
        return true;
    }
    
    bool deQueue() {
        if(start == nullptr){
            return false;
        }

        start= start->next;
        size++;
        if(size==maxcapacity)
        {
            start= nullptr;
            temp= nullptr;
        }
        return true;
    }
    
    int Front() {
        if(start == nullptr)
        {
            return -1;
        }
        return start->val;
    }
    
    int Rear() {
        if(temp == nullptr)
        {
            return -1;
        }
        return temp->val;
    }
    
    bool isEmpty() {
        if(size==maxcapacity)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(size==0)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */