#include<iostream>
using namespace std;

void printArray( int arr[] , int size){
    for (int i = 0; i <size; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<"printing done"<< endl;
    
}
int main(){
    int first[10]={0};
    printArray( first,10);
    
}