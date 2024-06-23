#include <iostream>
using namespace std;
int SumofNum(int n){
    if(n==0)
      return 0;
    else
      return SumofNum(n-1)+n;
}
int main() {
    cout<<SumofNum(5);
    return 0;
}
