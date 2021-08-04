
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define mod 1000000007

long long power(int N,int R)
    {
       //Your code here
       if(R==1) return N%mod;
       long long res = power(N,R/2)%mod;
       res = ((res%mod) * (res%mod))%mod;
       if(R%2) res = ((res%mod) * (N%mod))%mod;
       return res;
    }

int main()
{
    
    cout<<power(2,2);
    return 0;
}
