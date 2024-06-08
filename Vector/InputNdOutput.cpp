#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}