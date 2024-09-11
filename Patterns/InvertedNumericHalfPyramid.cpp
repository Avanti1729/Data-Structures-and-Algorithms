#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size "<<endl;
    cin>>n;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++)
            cout<<j+1<<" ";
        cout<<endl;
    }
}