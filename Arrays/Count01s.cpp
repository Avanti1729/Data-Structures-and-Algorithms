#include <iostream>
#include <vector>
using namespace std;
void CountZerosOnes(vector<int> &arr,int n){
    int c0=0,c1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            c0++;
        else
            c1++;
    }
    cout<<"Number of 0s : "<<c0<<endl;
    cout<<"Number of 1s : "<<c1<<endl;

}
int main(){
    int n,ele;
    vector<int> arr;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array (only 0 or 1) : ";
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
   CountZerosOnes(arr,n);
   return 0;
}