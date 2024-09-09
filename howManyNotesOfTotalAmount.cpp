#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Total Amount: ";
    cin>>n;
    int hundred , fifty , twenty, ones =0;
    switch (1)
    {
    case 1: hundred = n/100;
            n %=100;
    case 2: fifty = n/50;
            n %=50;
    case 3: twenty = n/20;
            n%=20;
    case 4: ones = n;
    }
    cout<<hundred<<" "<<fifty<<" "<<twenty<<" "<<ones<<endl;
}