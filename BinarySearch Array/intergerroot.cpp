#include<iostream>
using namespace std;
int intergerRoot( int n){
    int start = 0;
    int end =n;
    int mid = start + (end -start)/2;
    int ans =-1;
    while (start<=end){
        int square  = mid*mid;
        if(square == n){
            return mid;
        }
        if(square>n){
            end = mid -1;
        }else{
            start = mid +1;
            ans  = mid;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
double precision(int n, int precise){
    int root = intergerRoot(n);
    double factor =1;
    double ans = root;
    for (int i = 0; i < precise; i++){
        factor = factor/10;
        for (double j = ans; j*j < n; j=j+factor){
            ans =j;
        }
    }
    return ans;
}
int main(){
    cout <<  precision(10,2);

}
