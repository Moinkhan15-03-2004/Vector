
// write a program to copy the contents of one array into another in the reverse order;


#include<iostream>
using namespace std;
#include<vector>
void display(vector<int>&a){
    for(int i=0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    }
int main(){
vector<int>v1;
v1.push_back(1);
v1.push_back(6);
v1.push_back(2);
v1.push_back(3);
v1.push_back(7);
v1.push_back(4);
v1.push_back(5);
display(v1);
int i=0;
int j=v1.size()-1;
while(i<=j){
    int temp = v1[i];
    v1[i]= v1[j];
    v1[j]=temp;
    i++;
    j--;

}
display(v1);


}