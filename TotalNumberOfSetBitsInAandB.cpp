#include<iostream>
using namespace std;

int bits(int n){
    int count = 0;
    while (n!=0)
    {
        count++;
        n = n >> 1;
    }
    return count;
}
int sum(int a, int b){
    int ans =bits(a)+bits(b);
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Number of bits in "<<a<<" and "<< b <<" is "<<sum(a,b)<<endl;
}