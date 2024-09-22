#include<iostream>
#include<list>
using namespace std;
// we have to traverse to find elt
int main(){
    list<int>l;
   
    l.push_back(10);
    l.push_front(20);
    for (int i:l){
        cout<<i<<" ";
    }
    list<int>n(l);
    l.erase(l.begin());
    cout<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<l.size();
}
