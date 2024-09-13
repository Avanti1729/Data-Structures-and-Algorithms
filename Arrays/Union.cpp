// Each Element occurs twice except for one
#include <bits/stdc++.h>
using namespace std;
void Union(vector<int> &arr1,vector<int> &arr2){
    set<int> s;
    for(int i=0;i<arr1.size();i++)
        s.insert(arr1[i]);
    for(int i=0;i<arr2.size();i++)
        s.insert(arr2[i]);
    for(auto & i:s)
        cout<<i<<" ";
    
}
int main(){
    int n,ele;
    vector<int> arr1,arr2;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>ele;
        arr1.push_back(ele);
    }
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>ele;
        arr2.push_back(ele);
    }
   Union(arr1,arr2);
   return 0;
}