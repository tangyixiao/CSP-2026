#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c){
        cout<<1;
    }
    else{
        cout<<"0000";
        return 0;
    }
    if(b[0]==d[0]&&b[1]==d[1]){
        cout<<1;
    }
    else{
        cout<<"000";
        return 0;
    }
    char m=b[2],n=d[2];
    if((m=='A'||m=='B'||m=='C')&&(n=='F'||n=='D')){
        cout<<"00";
        return 0;
    }
    else if((n=='A'||n=='B'||n=='C')&&(m=='F'||m=='D')){
        cout<<"00";
        return 0;
    }
    else{
        cout<<1;
    }
    if((n=='A'&&m=='B')||(m=='A'&&n=='B')||(n=='B'&&m=='C')||(m=='B'&&n=='C')){
        cout<<1;
    }
    else if((n=='D'&&m=='F')||(m=='D'&&n=='F')){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
