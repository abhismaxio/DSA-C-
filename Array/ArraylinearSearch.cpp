#include<iostream>
using namespace std;
bool search(int arr[], int size ,int key){
    for(int i = 0; i < size; i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={1,23,4,4,13,43,42,4,10,12};
    int key;
    cout<<"what is the key element: ";
    cin>>key;
    
    bool found= search(arr, 10, key);
    if (found){
        cout<< "found";
    }else{
        cout<<"not found";
    }
    

}