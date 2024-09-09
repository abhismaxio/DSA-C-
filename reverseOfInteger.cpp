
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"value of n : ";
    cin>>n;
    int i=0;
    int ans =0;
    while (n!=0){
        int digit= n%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return 0;
        }
        ans=( pow(10,1)*ans) +digit;
        i++;
        n=n/10;
        
    }
    cout<<ans;
}