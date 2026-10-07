#include<iostream>
using namespace std;

class Node {
    public:
    int data; 
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* ptr = new Node(val);
        if(head == NULL){
            head = tail = ptr;
            return;
        }
        ptr->next = head;
        head = ptr;
    }

    void print(){
        Node*ptr = head;
        while(ptr != NULL){
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }

    void push_back(int val){
        Node* ptr = new Node(val);
        if(head == NULL){
            head = tail = ptr;
            return;
        }
        tail->next = ptr;
        tail = ptr;
    }

    void pop_front(){
        if(head == NULL) return;

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void pop_back(){
        if(head == NULL) return;

        if(head->next == NULL){
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val , int pos){
        if(pos == 0){
            push_front(val);
            return;
        }

        Node* ptr = new Node(val);
        Node* temp = head;
        for(int i = 0 ; i < pos - 1 ; i++){
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }

    void search(int val){
        Node* ptr = head;
        int idx = 0;
        while(ptr != NULL){
            if(val == ptr->data){
                cout << "Yes at index: " << idx << endl;
                return;
            }
            idx++;
            ptr = ptr->next;
        }
        cout << "Not found" << endl;
    }

    void reverse(){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        tail = head;
        head = prev;
    }

    void bubbleSort(Node* head){
        if(head == NULL || head->next == NULL) return;

        bool swapped;
        Node* current;
        Node* lptr = NULL;

        do{
            swapped = false;
            current = head;

            while(current->next != lptr){
                if(current->data > current->next->data){
                    swapped = true;
                    swap(current->data , current->next->data);
                }
                current = current->next;
            }
            
            lptr = current;

        }while(swapped);
        
    }
};
int main(){
    List l1;

    l1.push_front(5);
    l1.push_front(7);
    l1.push_front(3);

    l1.print();

    l1.push_back(67);
    l1.print();

    l1.pop_front();
    l1.print();

    l1.pop_back();
    l1.print();

    l1.push_back(88);
    l1.push_front(37);
    l1.print();

    l1.insert(44,2);
    l1.print();
    l1.search(44);

    l1.reverse();
    l1.print();
    return 0;
}



