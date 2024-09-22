#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(20);
    s.insert(30);
    s.insert(20);
    s.insert(51);
    s.insert(9);
    s.insert(10);
    for(auto i :s){
        cout<< i<<" ";
    }
    cout<<endl;
    // like 5 is present or not
    cout<< "5 is present or not: "<< s.count(5);
    cout<<endl;

    set <int> :: iterator it =s.begin();
    it++;
    // cout<< *it<<" ";
    s.erase(it);
    for(auto i :s){
        cout<< i<<" ";
    }
    cout<<endl;

    // code gives the value starting from 30

    set<int>::iterator itr= s.find(30);
    cout<<*itr;

    cout<<endl;
    for (auto i= itr; i!=s.end(); i++)
    {
        cout<<*i<<" ";
      
    }
    


}