// Each Element occurs twice except for one
#include <bits/stdc++.h>
using namespace std;
vector<int> Sort012s(vector<int> &arr,int n){
    int i=0,k=0,j=n-1;
    while(k<=j){
        if(arr[k]==0){
            swap(arr[i],arr[k]);
            i++;
            k++;
        }
        else if(arr[k]==1)
            k++;
        else {
            swap(arr[k],arr[j]);
            j--;
        }
        }
    return arr;
}
int main(){
    int n,ele;
    vector<int> arr;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
   arr=Sort012s(arr,n);
   for(auto & i: arr)
        cout<<i;
   return 0;
}