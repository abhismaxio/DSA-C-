#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"value of n is : ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int value =i;
        while(j<=i){
            cout<<value<<" ";
            // cout<<i+j-1<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}