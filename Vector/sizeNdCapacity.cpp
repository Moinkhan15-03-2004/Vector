#include<iostream>
using namespace std;
#include<vector>
int main(){

    vector<int>v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;


}