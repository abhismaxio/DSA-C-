// 1234
//  234
//   34
//    4

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"value of n: ";
  cin>>n;
  int i=1;
  while (i<=n){
    int space =1;
    while (space<=i-1){
        cout<<" ";
        space++;
    }
    int j =1;
    while (j<n-i+1){
        cout<<i+j-1;
        j++;
    }
    cout<<"\n";
    i++;
  }
}