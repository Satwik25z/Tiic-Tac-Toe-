#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Student{
    public:
    int* val;
    int a;

    Student(int ages , int a) : val(new int(ages)) , a(a){

    }
    Student(Student& s){
        this->val = new int;
        *(this->val) = *(s.val);
        this->a = s.a;
    }

    ~Student(){
        delete val;
    }
};


int main(){
    Student s1(25,2);
    // Student s2(s1);
    // *(s2.val) = 15;
    // cout << *(s1.val) << endl;
    // cout << *(s2.val) << endl;
    Student* newS = new Student(34,8);
    
    delete newS;
return 0;
}
