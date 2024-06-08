#include<iostream>
using namespace std;
#include<vector>
int main(){
    // Insert do not juse []square braket 
    // Access use squre bracket[] cout
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    // if you want to update or access use square bracket
    v[0]=88;
    cout<<v[0]<<" ";
        cout<<v[1]<<" ";
    cout<<v[2]<<" ";
        cout<<v[3]<<" ";
}