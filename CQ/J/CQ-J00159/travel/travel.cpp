#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
string c1,s1,c2,s2;
string ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2) ans+='1';
    else ans+='0';
    if(s1[0]==s2[0] && s1[1]==s2[1] && ans[0]=='1') ans+='1';
    else ans+='0';
    if(s1[2]>='A' && s1[1]<='C' && s2[2]>='A' && s2[2]<='C' && ans[0]=='1' && ans[1]=='1'){
        ans+='1';
        if(abs(s1[2]-s2[2])==1) ans+='1';
        else ans+='0';
    }
    else if(s1[2]>='D' && s1[1]<='F' && s2[2]>='D' && s2[2]<='F' && ans[0]=='1' && ans[1]=='1'){
        ans+='1';
        if(abs(s1[2]-s2[2])==1) ans+='1';
        else ans+='0';
    }
    else ans+="00";
    cout<<ans;
    return 0;
}
