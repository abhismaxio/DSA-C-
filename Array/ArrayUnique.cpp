#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,2,4,1};
    int ans =0;
    for (int i = 0; i < 5; i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans;
    
}