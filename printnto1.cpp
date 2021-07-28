
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

 void printNos(int N)
    {
        //Your code here
        if(N<=0){
            return ;
        }
        
        printNos(N-1);
        cout<<N<<" ";
    }

int main()
{
    printNos(10);

    return 0;
}
