#include<iostream>
using namespace std;

bool check( int a){
    if(a&1){
        return 1;
    }
    return 0;
}
int main(){
    int a ;
    cin>>a;
    if (a==1)
    {
        cout<<"odd";
    }
    else{
        cout<<"even";
    }
    
}