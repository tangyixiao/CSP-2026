#include<bits/stdc++.h>
using namespace std;
int c1,d1;
char c2[10],d2[10];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>c2>>d1>>d2;
    if(c1==d1) cout<<"1";
    else {cout<<"0000"; return 0;}
    if(c2[0]==d2[0] && c2[1]==d2[1]) cout<<"1";
    else {cout<<"000"; return 0;}
    if(((c2[2]=='A') || (c2[2]=='B') || (c2[2]=='C')) && ((d2[2]=='A') || (d2[2]=='B') || (d2[2]=='C')) || ((c2[2]=='D') || (c2[2]=='F')) && ((d2[2]=='D') || (d2[2]=='F'))) cout<<"1";
    else {cout<<"00"; return 0;}
    if((c2[2]=='A' && d2[2]=='B') || (c2[2]=='B' && d2[2]=='C') || (c2[2]=='B' && d2[2]=='A') || (c2[2]=='C' && d2[2]=='B') || (c2[2]=='D' && d2[2]=='F') || (c2[2]=='F' && d2[2]=='D')) cout<<"1";
    else cout<<"0";
    return 0;
}
