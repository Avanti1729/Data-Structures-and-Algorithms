// Each Element occurs twice except for one
#include <bits/stdc++.h>
using namespace std;
int FindDuplicate(vector<int> &nums){
   for(int i=0;i<nums.size();i++){
        nums[nums[i]]=nums[nums[i]]*-1;
   }
   for(int i=0;i<nums.size();i++)
        if(nums[i]<0)
            return -1*nums[i];
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
    cout<<"Position of missing element is "<<n<<" ";
   return 0;
}