// Each Element occurs twice except for one
#include <bits/stdc++.h>
using namespace std;
int FindDuplicate(vector<int> &nums){
    while(nums[0]!=nums[nums[0]])
        swap(nums[0],nums[nums[0]]);
    return nums[0];
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
    n=FindDuplicate(arr);
    cout<<"Duplicate Element is : "<<n;
   return 0;
}