#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int m =n;
    int ans = 0;
    if(n==0){
    ans = 1;
    }

    int mask = 0;
    while(m!=0){
        m  = m>>1;
        mask = mask<<1|1;
    }
     ans = (~n)&mask;
    cout<<ans;
    return 0;
}