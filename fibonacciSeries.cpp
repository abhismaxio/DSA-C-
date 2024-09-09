#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int a =0;
    int b=1;
    for (int i = 0; i <= n; i++)
    {
        
        int series = a+b;
        cout<<series<<" ";
        a=b;
        b=series;
    }
    
}