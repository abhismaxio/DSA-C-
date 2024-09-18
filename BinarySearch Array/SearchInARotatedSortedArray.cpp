#include<iostream>
using namespace std;
int pivot(int arr[], int size){
    int start =0;
    int end = size -1;
    while (start < end) {
        int mid = start +(end -start)/2;
        if(arr[mid]>arr[0]){
            start = mid+1;
        }else{
            end = mid;
        }
    }
    return start;
}
int Binary(int arr[], int start, int end, int key){
    while (start<=end){
         int mid = start + (end-start)/2;
         if(arr[mid] == key){
            return mid;
         }else if (arr[mid]<key){
            start = mid+1;
         }else{
            end = mid-1;
         }
    }
    return -1;
}
int search(int arr[], int size, int key){
    int pivotIndex = pivot(arr, size);
    if (key>=arr[pivotIndex] && key<=arr[size-1]){
        return Binary(arr,pivotIndex,size-1,key);
    }else{
        return Binary(arr,0,pivotIndex-1,key);
    }

}
int main(){
    int arr[] = {8,10,12 ,1,2,3,5,6,7,7,7};
    int ans = search(arr,11,3);
    cout <<"pivot index is at : "<< ans << endl;
}