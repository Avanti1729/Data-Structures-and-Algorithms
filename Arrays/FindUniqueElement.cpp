// Each Element occurs twice except for one
#include <iostream>
#include <vector>
using namespace std;
int Unique(vector<int> &arr,int n){
    int x=arr[0];
    for(int i=1;i<n;i++)
        x^=arr[i];
    return x;
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
   cout<<"The unique element is : "<<Unique(arr,n);
   return 0;
}