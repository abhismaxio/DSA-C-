// arr =5 =1,2,3,4,2 = 1^2^3^4^2
// then 2nd loop  1^2^3^4 
// soln =2

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,2,3,4};
    int ans =0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        ans = ans^arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans=ans^i;
    }
    cout<<ans;
}