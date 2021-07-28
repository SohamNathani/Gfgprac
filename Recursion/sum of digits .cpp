
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

 int sumOfDigits(int n)
    {
        //Your code here
        if(n!=0)
        return n%10 + sumOfDigits(n/10);
        
        return 0;
    }

int main()
{
    cout<<sumOfDigits(122);

    return 0;
}
