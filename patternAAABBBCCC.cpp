// AAA
// BBB
// CCC

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"value of n:";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j =1;
        while(j<=n){
            char A ='A'+i-1;
            cout<<A<<" ";
            j++;
        }
    
        cout<<endl;
        i++;
    }
}