
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

 int countDigits(int n)
    {
       //Your code here
       if(n/10!=0)
        return 1 + countDigits(n/10);
        
        return 1;
    }

int main()
{
    cout<<countDigits(122);

    return 0;
}
