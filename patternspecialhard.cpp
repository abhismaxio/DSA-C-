//     1
//    121
//   12321
//  1234321

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    int i=1;
    while (i<=n){

        int space = n-i;
        while (space){
            cout<<" ";
            space--;
        }

        int j=1;
        while (j<=i){
            cout<<j;
            j++;
        }
        
        int k = 1;
        while (k<i){
            cout<<k;
            k++;
        }
        cout<<endl;
        i++;
    }
    
}