#include<iostream>
using namespace std;

int BinarySearch ( int arr[], int size, int key){
    int start =0;
    int end = size-1;
    int mid = start +(end-start)/2;
    while(start<= end){
        if (arr[mid]==key){
            return mid;
        }else if (arr[mid]<key){
            start =mid +1;
        }else{
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5,7,8,10,12,16,18,33,77,88};
    int ans =BinarySearch(arr,14,10);
    cout << ans << endl;
}