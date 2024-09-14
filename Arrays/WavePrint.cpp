// Each Element occurs twice except for one
#include <bits/stdc++.h>
using namespace std;
void WavePrint(int m,int n,vector<vector<int>>&arr){
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++)
                cout<<arr[i][j];
        }
        else{
            for(int i=m-1;i>=0;i--)
                cout<<arr[i][j];
        }
    }
}
int main(){
    int n,m,ele;
    vector<vector<int>> arr1;
    cout<<"Enter the number of rows and columns int the array : ";
    cin>>m>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>ele;
        arr1[i][j]=ele;
    }
    }
    WavePrint(m,n,arr1);
   return 0;
}