#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v;
            v.push_back(9);
            v.push_back(10);
            v.push_back(6);
            v.push_back(1);
            for(int i=0;i<v.size();i++){
                cout<<v.at(i)<<" ";
            }
            cout<<endl;
           
 
}