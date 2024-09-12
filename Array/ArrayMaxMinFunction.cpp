#include<iostream>
using namespace std;
int getMax( int arr[],int n){
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++){
        maxi = max(maxi,arr[i]);
        // if(arr[i]>max){
        //     max=arr[i];
        // }
    }
    return maxi;
}
int getMin(int arr[],int n){
    int mini = INT_MAX;
    for (int i = 0; i < n; i++){
        mini= min(mini,arr[i]);
        // if(arr[i]<mini){
        //     mini =arr[i];
        // }
    }
    return mini;
}
int main(){
    int arr[100];
    int size;
    cout<<"enter no of elements: ";
    cin >> size;
    cout<<"enter elements: ";
    for (int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< getMax(arr,size)<<" "<<getMin(arr,size);

}