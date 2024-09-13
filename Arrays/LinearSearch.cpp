#include <iostream>
#include <vector>
using namespace std;
void LinearSearch(vector<int> &arr,int key,int n){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"Element found at position "<<i+1<<endl;
            return ;
        }
    }
    cout<<"Not found";
}
int main(){
    int key,n,ele;
    vector<int> arr;
    cout<<"Enter the key : ";
    cin>>key;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
   LinearSearch(arr,key,n);
   return 0;
}