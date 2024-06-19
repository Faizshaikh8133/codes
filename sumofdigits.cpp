#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int sum=0;
    int n;
    cin>>n;
    while (n!=0)
    {
        int ld=n%10;
        n=n/10;
        sum+=ld;
    }
    cout<<sum;

    return 0;
}