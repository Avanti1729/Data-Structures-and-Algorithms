#include <iostream>
using namespace std;
int main(){
    int n,k=1;
    cout<<"Enter the size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k+=1;
        }
        cout<<endl;
    }
}