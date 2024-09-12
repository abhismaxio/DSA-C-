#include<iostream>
using namespace std;

int arrSum( int arr[], int n){
    int sum =0;
    for (int i = 0; i < n; i++){
        sum =sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
    cout<< arrSum(arr,n);

}