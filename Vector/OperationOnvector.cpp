#include<iostream>
using namespace std;
#include<vector>
int main(){

    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
        v.push_back(34);
    v.push_back(13);
    v.push_back(98);
    v.push_back(45);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
