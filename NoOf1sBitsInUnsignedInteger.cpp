// 5=101=2
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<< "no of 1's bit in an unisgned integer : ";
  cin>>n;
  int count=0;
  while (n!=0)
  {
    if(n&1){
        count++;
    }
    n=n>>1;
  }
  cout<<count;
}