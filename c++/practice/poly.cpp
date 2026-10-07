#include <iostream>

// Node structure matching the image: contains coefficient, exponent (pow), and next pointer
struct Node {
    int coeff;
    int pow;
    Node* next;
    
    Node(int c, int p) : coeff(c), pow(p), next(nullptr) {}
};

class Solution {
public:
    // YOUR TASK: Implement this function
    // It should add p1 and p2 and return the head of a new linked list
    Node* addPolynomials(Node* p1, Node* p2) {
        
        Node* dummy = new Node(0,0);
        Node* head = dummy;

        while(p1 != NULL && p2 != NULL){
            Node* temp = new Node(0,0);
            head->next = temp;
            head = head->next;

            if(p1->pow > p2->pow){
                
                head->coeff = p1->coeff;
                head->pow = p1->pow;
                p1 = p1->next;
            }
            else if(p1->pow < p2->pow){

                head->coeff = p2->coeff;
                head->pow = p2->pow;
                p2 = p2->next;
            }
            else{
                head->coeff = p2->coeff + p1->coeff;
                head->pow = p2->pow;
                p1 = p1->next;
                p2 = p2->next;
            }

            
        }

        if(p1 == NULL){
            while(p2 != NULL){
                head->next = new Node(p2->coeff , p2->pow);
                p2 = p2->next;

                head = head->next;
            }
        }

        if(p2 == NULL){
            while(p1 != NULL){
                
                head->next = new Node(p1->coeff , p1->pow);
                p1 = p1->next;

                head = head->next;
            }
        }

        Node* newHead = dummy->next;
        delete dummy;

        return newHead; 
    }
};

// --- Boilerplate helper functions to test your code ---

// Helper to easily append new nodes to a polynomial
void appendNode(Node*& head, Node*& tail, int coeff, int pow) {
    Node* newNode = new Node(coeff, pow);
    if (!head) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

// Helper to print the polynomial in a readable format
void printPolynomial(Node* head) {
    while (head != nullptr) {
        std::cout << head->coeff << "x^" << head->pow;
        if (head->next != nullptr) std::cout << " + ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Building P1: 23x^9 + 18x^7 + 41x^6 + 163x^4 + 3x^0
    Node* p1 = nullptr;
    Node* tail1 = nullptr;
    appendNode(p1, tail1, 23, 9);
    appendNode(p1, tail1, 18, 7);
    appendNode(p1, tail1, 41, 6);
    appendNode(p1, tail1, 163, 4);
    appendNode(p1, tail1, 3, 0);

    // Building P2: 4x^6 + 10x^4 + 12x^1 + 8x^0
    Node* p2 = nullptr;
    Node* tail2 = nullptr;
    appendNode(p2, tail2, 4, 6);
    appendNode(p2, tail2, 10, 4);
    appendNode(p2, tail2, 12, 1);
    appendNode(p2, tail2, 8, 0);

    std::cout << "Polynomial 1: ";
    printPolynomial(p1);
    
    std::cout << "Polynomial 2: ";
    printPolynomial(p2);

    Solution sol;
    Node* result = sol.addPolynomials(p1, p2);

    std::cout << "Result Sum:   ";
    printPolynomial(result);

    return 0;
}