#include<iostream>
#include <stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("Apple");
    s.push("Banana");
    s.push("Cherry");
    cout<<"top element: "<<s.top();
    cout<<"size: "<<s.size();
    s.pop();
    cout<<"top element: "<<s.top();
    cout<<"EMPTY OR NOT : "<<s.empty()<<endl;


}