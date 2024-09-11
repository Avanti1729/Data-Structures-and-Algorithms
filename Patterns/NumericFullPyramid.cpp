#include <iostream>
using namespace std;
int main(){
    int n,k=1;
    cout<<"Enter the size ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--)
            cout<<"  ";
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k+=1;
        }
        if(i>0)
            k=k-i;
        int k1=k+i-2;
        for(int j=0;j<i;j++){
            cout<<k1<<" ";
            k1-=1;
        }
        cout<<endl;
    }
    
}