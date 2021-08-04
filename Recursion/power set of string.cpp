
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define mod 1000000007



void sub(vector<string> &v,string s, string curr, int i){
    if(i==s.length()){
        v.push_back(curr);
        return;
    }
    sub(v,s,curr,i+1);
    sub(v,s,curr+s[i],i+1);
}



vector <string> powerSet(string s)
{
   //Your code here
   vector<string> v;
   sub(v,s,"",0);
   sort(v.begin(),v.end());
   return v;
}

int main()
{
    
    cout<<powerSet("Raj");
    return 0;
}
