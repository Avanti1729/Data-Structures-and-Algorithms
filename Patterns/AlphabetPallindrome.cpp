#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : 1-26";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<char(j+65)<<"  ";
        for(int j=i-1;j>=0;j--)
            cout<<char(j+65)<<"  ";
        cout<<endl;
    }
}