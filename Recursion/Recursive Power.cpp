
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

 int RecursivePower(int n,int p)
    {
        //Your code here
        if(p==0)return 1;
        int res = RecursivePower(n,p/2);
        if (p%2!=0) res =res*res*n;
        else res=res*res;
        return res;
    }
   
int main()
{
    
    cout<<RecursivePower(2,5);
    return 0;
}
