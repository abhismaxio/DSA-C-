#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

vector<int> intersection(int arr1[], int n, int arr2[], int m) {
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { // Corrected loop condition from i < m to j < m
            if (arr1[i] == arr2[j]) {
                ans.push_back(arr2[j]);
                arr2[j] = INT_MIN; // Corrected to use assignment operator
                break;
            }
        }
    }

    return ans; // Return the vector containing the intersection
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
