// 101=5
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"value of n : ";
  cin>>n;
  int i=0;
  int number =0;
  while (n!=0)
  {
    int bit = n%10;

    if (bit==1)
    {
        number= (1<<i)+number;

    }
    i++;
    n=n/10;
  }
  cout<<number;

}