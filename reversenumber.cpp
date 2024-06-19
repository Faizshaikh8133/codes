#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int r=0;
    int n;
    cin>>n;
    while (n!=0)
    {
        int ld=n%10;
        r*=10;
        r+=ld;
        n=n/10;
       
    }
    cout<<r;

    return 0;
}