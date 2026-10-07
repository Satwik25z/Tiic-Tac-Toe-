#include<iostream>
#include<stack>
using namespace std;
bool isOperand(char c){
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') );
}
int precedence(char c){
    if(c == '^') return 3;
    if(c == '/' || c == '*') return 2;
    if(c == '+' || c == '-') return 1;
    return -1;
}

int main(){
    string s ="3+4*5/6";
    stack<string> st;
    string result = "";

    for(int i = 0 ; i < s.length() ; i++){
        char c = s[i];

        if(isOperand(c)){
            st.push(string(1,c));
        }
        else{
            string s11 = st.top();
            st.pop();
            string s22 = st.top();
            st.pop();

            string temp = "(" + s22 + c + s11 + ")";
            st.push(temp);
        }

        return st.top();
    }
    return 0;
}