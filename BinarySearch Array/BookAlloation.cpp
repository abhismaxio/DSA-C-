#include<iostream>
using namespace std;

bool isPossible(int arr[], int size , int m, int mid){
    int studentCount =1;
    int pageSum =0;
    for (int i = 0; i < size; i++){
        if (pageSum +arr[i]<=mid){
            pageSum+=arr[i];
        }else{
            studentCount++;
            if (studentCount>m || arr[i]>mid ){
                return false;
            }
            // page =0;
            pageSum = arr[i];
        }
    }
    return true;
}

int bookAllocate( int arr[], int size, int m){
    int sum = 0;
    int start =0;
    for (int i = 0; i < size; i++){
        sum+=arr[i];
    }
    int end =sum;
    int ans =-1;  
    // now we have  start to end 
    while (start <=end){
        int mid = start +(end-start)/2;
        if (isPossible(arr,size,m,mid)){
            ans =mid;
            end =mid-1;
        }else{
            start =mid+1;
        }
         
    }
    return ans;
}
int main(){
    int arr[] = {5, 5, 5, 5};
    cout<< bookAllocate(arr,4,2);
}