// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n : ";
    cin >> n;
    int i = 1;
    while (i <= n){
        int j = 1;
        while (j<=n-i+1)
        {
            cout << j;
            j++;
        }




        cout<<endl;
        i++;
    }
}