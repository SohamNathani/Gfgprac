
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

    long long toh(int n, int from, int to, int aux) {
        
       
        // Your code here
        
        
        if(n==1){
            cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
            return 1;
        }
        long long a = toh(n-1,from,aux,to);
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
        long long b = toh(n-1,aux,to,from);
        return a+b+1;
        
        
        
    }

int main()
{
    cout<<toh(5);

    return 0;
}
