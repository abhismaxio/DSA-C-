#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(19);
    d.push_back(6);
    d.push_back(2);
    d.push_front(18);   //new
    for(int i :d){
        cout<<i<<endl;
    }
    cout<<d.at(1)<<endl;

    cout<<d.front()<<endl;
    cout<<d.back();
}