#include<bits/stdc++.h>
using namespace std;
int main(){
 freopen("travel.in","r",stdin);
 freopen("travel.out","w",stdout);
string a;
string c;
string b;
string d;
cin>>a>>b;
cin>>c>>d;
int g[4]={0};
if(a==c){
    g[0]=1;
} if(a==c &&b[0]==d[0] && b[1]==d[1]){
    g[1]=1;
} if((a==c &&b[0]==d[0] && b[1]==d[1])&&(b[2]=='A'||b[2]=='B'||b[2]=='C') && (b[2]=='A'||b[2]=='B'||b[2]=='C')){
    g[2]=1;
}if((a==c &&b[0]==d[0] && b[1]==d[1])&&(b[2]=='A'||b[2]=='B'||b[2]=='C') && (b[2]=='A'||b[2]=='B'||b[2]=='C')){
    if((d[2]=='F'&& b[2]=='D')||(d[2]=='D'&&b[2]=='F')){
        g[3]=1;
    }else if((int)b[2]-(int)d[2]==1){
        g[3]=1;
    }
}
cout<<g[0]<<g[1]<<g[2]<<g[3];
return 0;
}
