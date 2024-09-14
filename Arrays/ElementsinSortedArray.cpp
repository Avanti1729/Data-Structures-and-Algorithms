// Each Element occurs twice except for one
#include <bits/stdc++.h>
using namespace std;
vector<int> FindRepeating(vector<int> &n1, vector<int> &n2,vector<int> &n3){
    int n1s=n1.size(),n2s=n2.size(),n3s=n3.size(),i=0,j=0,k=0;
    set<int> s;
    vector<int> ans;
    while(i<n1s && j<n2s && k<n3s){
        if(n1[i]==n2[j] && n2[j]==n3[k]){
            s.insert(n1[i]);
            i++,j++,k++;
        }
        else if(n1[i]<n2[j])
            i++;
        else if(n2[j]<n3[k])
            j++;
        else 
            k++;
        }
        for(auto & i :s)
            ans.push_back(i);
        return ans;
}
int main(){
    int n,ele;
    vector<int> arr1,arr2,arr3;
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
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>ele;
        arr3.push_back(ele);
    }
    arr1=FindRepeating(arr1,arr2,arr3);
    for(auto &i:arr1)
        cout<<i<<" ";
   return 0;
}