// 3 2 1 
// 3 2 1 
// 3 2 1 
#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

}