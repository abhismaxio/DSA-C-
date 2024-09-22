#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a(5,3);
    a.push_back(1);
    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<< "capacity : "<<a.capacity()<<endl;
    cout<<"size-> "<<a.size()<<endl;
    a.pop_back();
    cout<< "capacity : "<<a.capacity()<<endl;
    cout<<"size-> "<<a.size()<<endl;
    cout<<"front-> "<<a.front()<<endl;
    cout<<"back-> "<<a.back()<<endl;
    a.clear();
    cout<< "capacity : "<<a.capacity()<<endl;
    cout<<"size-> "<<a.size()<<endl;
    
}