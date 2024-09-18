#include<iostream>
using namespace std;

int pivot(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start<end){
        int mid = start+(end-start)/2;
        if (arr[mid]>arr[0]){
            start = mid+1;
        }else{
            end = mid;
        }
    }
    return start;
}
int main(){
    int arr[] = {8,10,12 ,1,2,3,5,6,7,8,9};
    int ans = pivot(arr,11);
    cout <<"pivot index is at : "<< ans << endl;
}