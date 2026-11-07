#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
string c1,s1,c2,s2;
void solve(){
    cin>>c1>>s1>>c2>>s2;
    bool flag1=(c1==c2),
         flag2=(flag1&&s1.substr(0,2)==s2.substr(0,2)),
         flag3=(flag2&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D'))),
         flag4=(flag3&&(s1[2]<='C'&&s2[2]<='C'?abs(s1[2]-s2[2])==1:true));
    cout<<flag1<<flag2<<flag3<<flag4<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int T=1;
    // cin>>T;
    while(T--)
        solve();
    return 0;
}