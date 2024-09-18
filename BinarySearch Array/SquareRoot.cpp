#include<iostream>
using namespace std;

int rot(int x){
    int start =0;
    int end =x;
    int ans =-1;
    while (start<=end){
        long long int mid = start + (end-start)/2;
        long long int square = mid*mid;

        if (square == x){
            return mid;
            break;
        }
        if (square>x){
            end = mid-1;
        }else{
            ans=mid;
            start = mid+1;
        }
    }
    return ans;
}
double precision(int n, int precision, int rotsoln){
    double factor = 1;
    double ans =rotsoln;
    for (int i = 0; i < precision; i++){
        factor = factor/10;
        for (double j = ans; j*j<n; j=j+factor){
            ans =j;
        }
    }
    return ans;
}
int main(){
    int a = rot(10);
    cout << precision(10, 2, a) << endl;
}