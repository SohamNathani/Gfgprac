
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

     int josephus(int n, int k)
    {
       //Your code here
       if(n==1)return 1;
       int ans =  (k + josephus(n-1,k))%n;
       return ans == 0 ? n:ans;
    }

int main()
{
    cout<<josephus(5);

    return 0;
}
