#include<iostream>
using namespace std;

int first(int arr[], int size, int first){
    int start =0;
    int end = size-1;
    int ans =-1;
    while (start<=end){
        int mid = start +(end-start)/2;
        if(arr[mid]==first){
            ans = mid;
            end = mid-1;   // first occurance main code
        }else if (arr[mid]<first){
            start =mid+1;
        }else{
            end = mid-1;
        }
    }
    return ans;
}
int last(int arr[], int size, int last){
    int start =0;
    int end = size-1;
    int ans =-1;
    while (start<=end){
        int mid = start +(end-start)/2;
        if(arr[mid]==last){
            ans = mid;
            start = mid+1;   // LAST occurance main code
        }else if (arr[mid]<last){
            start =mid+1;
        }else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5,7,8,10,10,12,16,18,33,77,88};
    int ans = first(arr,15,10);
    int das = last(arr,15,10);
    int total_Occurance  = das -ans +1;
    cout <<"first index is at : "<< ans <<" and second is : "<<das<< " total occurance is : "<< total_Occurance<< endl;
}
