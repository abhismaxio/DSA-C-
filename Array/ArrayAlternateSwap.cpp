#include<iostream>
using namespace std;
void altSwap( int arr[],int n){
    for (int i = 0; i < n; i+=2)
    {
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    return;
}
void print (int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    return;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5,};
    altSwap(arr,5);
    print(arr,5);
}