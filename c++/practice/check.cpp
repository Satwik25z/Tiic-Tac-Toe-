#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Stack{
    public:
    list<int> ll;
    
};

int main(){
    Stack s;
    s.push(4);
    s.push(8);
    s.push(12);
    
    while(s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}