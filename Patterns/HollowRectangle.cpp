#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the rows and columns of the rectangle "<<endl;
    cin>>r;
    cin>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || j==0 || i==r-1 || j==c-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}