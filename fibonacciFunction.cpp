#include<iostream>
using namespace std;
int fibonacci (int n){
    int a=0;
    int b=1;
    int count =0;
    if (n==0){
        return a;
    }else if (n==1){
        return b;
    }else{
        for (int i = 0; i < n; i++)
        {
            count =a+b;
            a=b;
            b=count;
        }
        return count;
    }
}
int main(){
    int n;
    cout<<"Enter the number of terms you want in the Fibonacci sequence: ";
    cin>>n;
    cout<<fibonacci(n);
}