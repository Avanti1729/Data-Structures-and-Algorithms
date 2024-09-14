// Each Element occurs twice except for one
#include <bits/stdc++.h>
using namespace std;
int FindRepeating(vector<int> &nums){
    unordered_map<int,int> hash;
   for(int i=0;i<nums.size();i++)
        hash[nums[i]]++;
   for(int i=0;i<nums.size();i++)
        if(hash[nums[i]]>1)
            return i+1;
    return -1;
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
    n=FindRepeating(arr);
    cout<<"Position of repeating element is "<<n<<" ";
   return 0;
}