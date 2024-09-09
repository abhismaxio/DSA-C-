#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "value to check prime no : ";
    cin>>n;
    bool prime =1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime=0;
            break;
        }
    }
    if (prime==1)
    {
        cout<<n<<" is a prime no";
    }else{
        cout<<n<<" is not a prime no";
    }
    

    

}