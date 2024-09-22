#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>a = {1,2,3,4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout<< a[i]<<" "; 
        // cout<<a.at(i)<<" ";    same
     }

    cout<< endl<<"empty or not: "<< a.empty()<<endl;
    cout<<"first elt: "<<a.front()<<endl;
    cout<<"last elt: "<<a.back()<<endl;
}