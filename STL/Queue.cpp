#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    // cout << "Size of queue: " << q.size() << endl;
    // q.pop();
    // cout<<q.back();
    // cout<<q.front();
   while (!q.empty())
   {
    cout<<q.front()<<" ";
    q.pop();
   }
   
   
}