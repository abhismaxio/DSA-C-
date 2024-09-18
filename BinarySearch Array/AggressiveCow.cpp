#include<iostream>
#include<vector>
#include<algorithm> // for sort function
using namespace std;

bool ispossible(vector<int>&stalls, int cowNum, int mid ){
    int lastStall = stalls[0];
    int cowsCount =1;
    for (int i = 1; i < stalls.size(); i++){
        if (stalls[i] -lastStall >=mid){
            cowsCount++;
            if (cowsCount == cowNum){
                return true;
            }
            lastStall = stalls[i];
        }
    }
    return false;
}

int aggressiveCow(vector<int>&stalls, int cowNum){
    sort(stalls.begin(), stalls.end()); // Sorting the stalls
    int start =0;
    int maxi =-1;
    for (int i = 0; i < stalls.size(); i++){
        maxi = max(maxi,stalls[i]);
    }
    int end = maxi;
    int ans =-1;
    while (start <=end){
        int mid = start +(end-start)/2;
        if (ispossible(stalls, cowNum, mid)){
            ans = mid;
            start = mid +1;
        }else{
            end = mid-1;
        }
    }
    return ans;
}
int main (){
    vector<int>stalls = {4,2,1,8,9};
    cout<< aggressiveCow(stalls, 3);
}