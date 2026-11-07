#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ss1,ss2;
char a,b;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
        cout<<1;
    }
    else{
        cout<<0<<0<<0<<0;
        return 0;
    }
    ss1+=(s1[0]-'0')*10;
    ss1+=s1[1]-'0';
    ss2+=(s2[0]-'0')*10;
    ss2+=s2[1]-'0';
    if(ss1==ss2){
        cout<<1;
    }
    else{
        cout<<0<<0<<0;
        return 0;
    }
    a=s1[2];
    b=s2[2];
    if(a>='A' and a<='C'){
        if(b=='A' or b=='B' or b=='C'){
            cout<<1;
        }
        else{
            cout<<0<<0;
            return 0;
        }
    }
    else if(a>='E' and a<='F'){
        if(b=='E' or b=='F'){
            cout<<1;
        }
        else{
            cout<<0<<0;
        }
    }
    if(a=='C' and b=='D'){
        cout<<0;
        return 0;
    }
    if(a=='D' and b=='C'){
        cout<<0;
        return 0;
    }
    if(a+1==b or b+1==a){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
