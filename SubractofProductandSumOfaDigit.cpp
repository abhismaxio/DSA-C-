// 256
// 2*5*6=24
// 2+5+6=13
// 24-13=11

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<< "give me a value :";
  cin>>n;
  int sum=0;
  int product =1;
//   for (int i = 0; i <10; i++){
//     int digit = n%10;
//     if (digit>0){
//         sum=sum+digit;
//         product=product*digit;
//         n=n/10;
//     }
//     else{
//         break;
//     }
//   }
  
while (n!=0)
{
    int digit =n%10;
    sum=sum+digit;
    product=product*digit;
    n=n/10;
}
  cout<<product-sum<<" ";
}