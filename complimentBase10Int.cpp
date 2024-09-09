#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "compliment Base 10 interger : ";
    cin>>n;
    int m=n;
    int mask =0;
    if (n==0){
        cout << 1;
    }
    else{
        while (m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
        cout<< m << "" << mask<<endl;
        }
        int ans = (~n)&mask;
        cout<< ans;
    }
    
    
};