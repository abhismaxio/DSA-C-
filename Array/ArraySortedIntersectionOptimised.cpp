#include<iostream>
#include <vector>
using namespace std;
vector <int>  intersection(int arr1[],int n, int arr2[],int m){
    vector<int> result;
    int i,j=0;
    while (i<n && j<m ){
        if (arr1[i]==arr2[j]){
            result.push_back(arr1[i]);
            i++;
            j++;
        }else if (arr1[i]>arr2[j])
        {
            j++;
        }else if(arr1[i]<arr2[j])
        {
            i++;
        }

    }
    return result;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> result = intersection(arr1, n, arr2, m);

    // Print the result
    cout << "Intersection: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
