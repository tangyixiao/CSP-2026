#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int r,x;
int main() {
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int flag1=1,flag2=1,flag3=1,flag4=1;
    cin>>c1>>s1>>c2>>s2;
    if (s1[2]=='D' || s1[2]=='E') r=2;
    else r=1;
    if (s2[2]=='D' || s2[2]=='E') x=2;
    else x=1;
    if (c1!=c2) {
        cout<<0<<0<<0<<0;
    }else if (s1[1]=s2[1] || s1[0]!=s2[0]) {
        cout<<1<<0<<0<<0;
    }else if (r!=x) {
        cout<<1<<1<<0<<0;
    }else if (s1[2]+s2[2]==132) {
        cout<<1<<1<<1<<0;
    }else cout<<1<<1<<1<<1;
    return 0;
}
