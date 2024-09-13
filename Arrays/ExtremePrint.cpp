#include <iostream>
#include <vector>
using namespace std;
void ExtremePrint(vector<int> &arr,int n){
    int start=0,end=n-1;
    while(start<=end){
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        start++;
        end--;
    }
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
   ExtremePrint(arr,n);
   return 0;
}