#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;
    m[1]="one";
    m[2]="two";
    m[3]="love";
    m[4]="hate";
    m[5]="malous";
    m[6]='a';
    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"finding is: "<< m.count(4);
    cout<<endl;
    
    auto it = m.find(2);
    for (auto i= it; i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    
}