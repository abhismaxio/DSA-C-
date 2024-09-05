#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"value of n : ";
    cin>> n;
    int i =1;
    char A = 'A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<A<<" ";
            j++;
            A++;
        }
        cout<<endl;
        i++;
    }
}