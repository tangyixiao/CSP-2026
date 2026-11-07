#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int a1,b1,c1;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a>>b>>c>>d;
    if(a==c){
        a1=1;
        cout<<'1';
    }
    else{
        cout<<'0';
    }
    if(b[0]==d[0] && b[1]==d[1] &&a1){
        cout<<'1';
        b1=1;
    }
    else{
        cout<<'0';
    }
    if(b1 &&(((b[2]=='A' || b[2]=='B' || b[2]=='C')&&(d[2]=='A' || d[2]=='B' || d[2]=='C')) || ((b[2]=='D' && d[2]=='E') && (b[2]=='E' && d[2]=='D')))){
        cout<<'1';
        c1=1;
    }
    else{
        cout<<'0';
    }
    if(c1 &&((d[2]=='E' || d[2]=='D') || (d[2]=='B' && b[2]=='C') || (d[2]=='C' && b[2]=='B') || (d[2]=='B' && b[2]=='A') || (d[2]=='A' && b[2]=='B'))){
        cout<<'1';
    }
    else{
        cout<<'0';
    }
    return 0;
}
