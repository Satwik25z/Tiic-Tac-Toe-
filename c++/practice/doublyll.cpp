#include<iostream>
using namespace std;

class Node{
    public:

    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;

public:
    DoublyList(){
        head = tail = nullptr;
    }

    void push_front(int val){
        Node* ptr = new Node(val);
        if(head == NULL){
            head = tail = ptr;
            return;
        }
        head->prev = ptr;
        ptr->next = head;
        head = ptr;

        return;
    }

    void print(){
        if(head == NULL) return;

        Node* temp = head;
        while(temp != nullptr){
            cout << temp->val <<  " " << "<=>" << " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        return;
    }

    void push_back(int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = tail = temp;
            return;
        }

        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
    }

    void pop_front(){
        if(head == NULL){
            cout << "List is already empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }

        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "Error" << endl;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        if(tail != NULL){
            tail->next = NULL;
        }

        delete temp;
    }

};

int main(){
    DoublyList l1;

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

    return 0;
}