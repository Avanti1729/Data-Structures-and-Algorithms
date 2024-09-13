#include <bits/stdc++.h>
#include <vector>
using namespace std;
int Maximum(vector<int> &arr,int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;

}
int main(){
    int n,ele;
    vector<int> arr;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
   cout<<"The maximum element in the array "<<Maximum(arr,n);
   return 0;
}