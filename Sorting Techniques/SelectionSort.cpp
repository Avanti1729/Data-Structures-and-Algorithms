#include <iostream>
using namespace std;
int main() {
    int arr[10]={8,6,3,10,9,4,12,5,2,7};
    int i,j,k;
    int temp=0;
    for(int i=0;i<9;i++){
        for(j=k=i;j<10;j++){
            if(arr[j]<arr[k])
                k=j;
        }
        temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
    for(int i=0;i<10;i++)
     cout<<arr[i]<<" ";

    return 0;
}