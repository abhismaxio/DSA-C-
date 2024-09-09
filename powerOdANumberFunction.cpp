#include<iostream>
using namespace std;
int power(int a,int b){
    int ans =1;
    for (int i = 0; i < b; i++)
    {
        ans = ans*a;

    }
    cout<<ans;
    return 1;
}
int main() {
    int a,b;
    cout<<"value of a: ";
    cin>>a;
    cout<<"power: ";
    cin>>b;
    power(a,b);
}