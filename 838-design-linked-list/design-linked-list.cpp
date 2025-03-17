class MyLinkedList {
    private:
    struct Node {
        int data;
        Node* next;
        Node(int x):data(x),next(nullptr){}
    };

    Node* head;
    int size;
public:
    MyLinkedList() {
        head = nullptr;
        size = 0;

        
    }
    
    int get(int index) {
        if (index < 0 || index >= size)
            return -1;
        Node* p = head;
        for (int i = 0; i < index; i++) {
            p = p->next;
        }
        return p->data;

        
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;

        
    }
    
    void addAtTail(int val) {
         Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* p = head;
            while (p->next) {
                p = p->next;
            }
            p->next = newNode;
        }
        size++;

        
    }
    
    void addAtIndex(int index, int val) {
         if (index < 0 || index > size)
            return;
        if (index == 0) {
            addAtHead(val);
            return;

        
    }
    Node* newNode = new Node(val);
        Node* p = head;
        for (int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        newNode->next = p->next;
        p->next = newNode;
        size++;
    }


    
    void deleteAtIndex(int index) {
         if (index < 0 || index >= size)
            return;

        Node* temp;
        if (index == 0) {
            temp = head;
            head = head->next;
        } else {
            Node* p = head;
            for (int i = 0; i < index - 1; i++) {
                p = p->next;
            }
            temp = p->next;
            p->next = p->next->next;
        }
        delete temp;
        size--;

        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */