#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {2, 5, 5, 6, 9};
    cout<<"finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"upper bound-> "<< upper_bound(v.begin(),v.end(),10)-v.begin()<<endl; // find first elt that is greater than value
    cout<<"lower bound-> "<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;

    int a=3;
    int b=10;
    cout<<"max "<<max(a,b)<<endl;
    cout<<"min "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a "<<a<<" b "<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;

    rotate(v.begin(), v.begin()+4,v.end());
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }
    
}