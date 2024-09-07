// ****
//  ***
//   **
//    *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"value of n: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int space =1;
        while(space<=i-1){
            cout<<" ";
            space++;
        }
        int j =0;
        while (j<=n-space)
        {
            cout<<"*";
            j++;
        }

    cout<<endl;
    i++;
    }
}