#include<iostream>
using namespace std;

int mountainPeak( int arr[],int size){
    int start =0;
    int end = size-1;
    while (start<end){
        int mid = start +(end-start)/2;
        cout<<"mid is" <<mid<<endl;
        if(arr[mid]<arr[mid+1]){
            start =mid+1;
            cout<<"start is" <<start<<endl;
        }else{
            end = mid;
            cout<<"end is" <<end<<endl;
        }
    }
    return start;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5,7,8,10,9,4,1};
    int ans = mountainPeak(arr,11);
    cout <<"peak index is at : "<< ans << endl;
}