#include<bits/stdc++.h>

using namespace std;
string s1,s2,c2,c1;
signed main() {
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
        cout<<1;
        if(s1[0]!=s2[0]||s1[1]!=s2[1]) {cout<<"000";return 0;}
        cout<<1;
        int flag2,flag1;
        if(s1[2]<='C') flag1=1;
        else flag1=2;
        if(s2[2]<='C') flag2=1;
        else flag2=2;
        // cout<<s1[2]<<' '<<s2[2]<<' '<<flag1<<' '<<flag2<<'\n';
        if(flag1!=flag2) {cout<<"00";return 0;}
        cout<<1;
        if((char)(s1[2]+1)==s2[2]||(char)(s1[2]-1)==s2[2]) cout<<1;
        else cout<<0;
    }else{
        cout<<"0000";
    }

    return 0;
}