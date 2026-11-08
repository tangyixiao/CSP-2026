#include <bits/stdc++.h>
using namespace std;

string c,s,cc,ss;
string ans="0000";

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c>>s>>cc>>ss;
    if(c==cc) ans[0]='1';
    if(ans[0]=='1' and s[0]==ss[0] and s[1]==ss[1]) ans[1]='1';
    if(ans[1]=='1' and ((s[2]=='A' and ss[2]=='B') or (s[2]=='B' and ss[2]=='A') or (s[2]=='B' and ss[2]=='C') or (s[2]=='C' and ss[2]=='B') or (s[2]=='D' and ss[2]=='F') or (s[2]=='F' and ss[2]=='D'))) ans[3]='1';
    if(ans[3]=='1' or ((s[2]=='A' and ss[2]=='C') or (s[2]=='C' and ss[2]=='A'))) ans[2]='1';
    cout<<ans;
    return 0;
}