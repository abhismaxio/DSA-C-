#include<iostream>
using namespace std;
int Ap(int n){
    int ans =(3*n)+7;
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout <<Ap(n);
}