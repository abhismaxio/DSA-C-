#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pairsum(int arr[],int size, int target){
    vector<vector<int>> result;
    for (int i = 0; i < size-1; i++){
        for (int j= i+1; j < size; j++){
            if ( arr[i] + arr[j] == target){
                vector <int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                result.push_back(temp);
            }
        }
    }
    return result;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int target = 7;
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<vector<int>> result = pairsum(arr, size, target);

    // Print the result
    cout << "Pairs that sum to " << target << ": ";
    // for (const auto& pair : result) {
    //     cout << "(" << pair[0] << ", " << pair[1] << ") ";
    // }
    for (size_t i = 0; i < result.size(); i++) { // Use size_t for an unsigned integer type
    const vector<int>& pair = result[i]; // Explicitly specify the type of pair
    cout << "(" << pair[0] << ", " << pair[1] << ") ";
    }

    return 0;
}