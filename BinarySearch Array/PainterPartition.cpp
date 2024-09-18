#include<iostream>
using namespace std;

bool isPossible( int arr[], int size , int m, int mid){
    int painterCount = 1;
    int paintedUpTo  = 0;
    for (int i = 0; i < size; i++){
        if (paintedUpTo+arr[i] <=mid ){
            paintedUpTo+=arr[i];
        }else{
            painterCount++;
            if(arr[i]>mid || painterCount> m){
                return false;
            }
            // paintedUpTo = 0;
            paintedUpTo = arr[i];
        }
    }
    return true;
}
int partition( int arr[], int size , int m){  // m= no of painters
     int sum =0;
     int start =0;
     for(int i=0;i<size;i++){
        sum += arr[i];
     }
     int end =sum;
     int time =-1;
     while (start<=end){
        int mid = start+(end-start)/2;
        if(isPossible( arr,size,m, mid)){
            time = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return time;
}
int main(){
    int arr[] = {5,5,5,10};
    cout<< partition(arr, 4, 3);
}