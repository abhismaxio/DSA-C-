#include<iostream>
using namespace std;

int factorial( int a ){
    int fact =1;
    for (int i = 1; i <=a; i++)
    {
        fact= fact*i;
    }
    return fact;
}
int nCr(int n , int r){
    int numo = factorial(n);
    int deno = factorial(r) * factorial(n-r);
    int ans =numo/deno;
        return ans;

}
int main(){
    int n,r;
    cin>> n>>r;
    int ans = nCr(n,r);
    cout<< ans;
}