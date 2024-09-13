#include <iostream>
#include <vector>
using namespace std;
vector <int> Reverse(vector<int> &arr,int n){
    for(int i=0;i<n/2;i++)
        swap(arr[i],arr[n-1-i]);
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
   arr=Reverse(arr,n);
   for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
   return 0;
}