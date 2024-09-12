#include<iostream>
using namespace std;
void swapNumber(int &a ,int &b){
    int temp = a;
    a=b;
    b=temp;
}
void reverse( int arr[], int n){
    int start =0;
    int end = n-1;
    for (int i = 0; i < n/2; i++)
    {
        swapNumber(arr[start],arr[end]);
        start++;
        end--;
    }
    return;
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]={0,10,23,3,4};
    reverse(arr,5);
    printArray(arr,5);
    
}