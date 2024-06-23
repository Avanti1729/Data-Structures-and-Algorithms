#include <iostream>
using namespace std;
void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}
int main() {
    // Write C++ code here
    fun(5);
    return 0;
}