
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

   
int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        int W,H;
        cin>>W>>H;
        int x1,y1,x2,y2;
        int w,h;
        cin>>x1>>y1>>x2>>y2;
        cin>>w>>h;
        float ans = 0.0f;
        if(abs(x1-x2)+w<=W || abs(y1-y2)+h<=H){
            float ans1 = static_cast<float>(h-max(y1,abs(y2-H)));
            float ans2 =static_cast<float>(w-max(x1,abs(x2-W)));
            if( abs(x1-x2)+w>W ){
                ans = ans1;
            }else if(abs(y1-y2)+h>H){
                ans = ans2;
            }else{
                ans = min(ans1,ans2);
            }
            cout<<fixed<<setprecision(9)<<ans<<endl;
        }
        else cout<<-1<<endl;
        
    }

    return 0;
}
