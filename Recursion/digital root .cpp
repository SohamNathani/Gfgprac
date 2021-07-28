
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

 int digitalRoot(int n)
    {
        //Your code here
        if(n/10!=0)
        return digitalRoot(n%10 +digitalRoot(n/10));
        
        return n;
        
    }

int main()
{
    cout<<digitalRoot(122);

    return 0;
}
