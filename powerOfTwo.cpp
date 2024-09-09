#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"comapre power of 2 with number : ";
    cin>>n;
    int ans =1;
    int check =0;
    for (int i = 0; i <=30; i++){
        
        if(ans==n){
            check =1;
        }
        if (ans<INT_MAX/2)
        {
            ans= ans*2;
            cout<<ans<<endl;
            cout<<INT_MAX<<endl;
        }
        
        

    }
    if (check==1){
        cout<<"yup found it";
    }else{
        cout<<"not found";
    }
    
    
}