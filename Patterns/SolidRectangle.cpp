#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the rows and columns of the rectangle "<<endl;
    cin>>r;
    cin>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<"* ";
        cout<<endl;
    }
}