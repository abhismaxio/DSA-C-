#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>maxi;                                        // max heap
    priority_queue<int,vector<int>,greater<int>>mini;               // min heap
    maxi.push(10);
    maxi.push(50);
    maxi.push(30);
    maxi.push(80);
    maxi.push(20);
    while (!maxi.empty()){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

cout<<endl;
    mini.push(19);
    mini.push(5);
    mini.push(20);
    mini.push(1);
    mini.push(10);
    while(!mini.empty()){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    
}