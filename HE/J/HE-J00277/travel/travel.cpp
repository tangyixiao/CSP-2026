#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>c2>>s1>>s2;
    int o,n,t;
    if(c1==s1&&c1!="01"&&c1!="16"){
        cout<<1;
        t=1;}
    else{cout<<0;
        t=0;}

    if(c2[0]==s2[0]&&c2[1]==s2[1]&&t==1){
        cout<<1;
        o=1;}
    else{cout<<0;
        o=0;}

    if(c2[2]!=s2[2]&&o==1){
        if(c2[2]=='A'||c2[2]=='B'||c2[2]=='C'){
            if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
                    cout<<1;
                    n=1;}
            else{cout<<0;
                n=0;}
            }
        else if(c2[2]=='D'||c2[2]=='E'){
            if(s2[2]=='D'||s2[2]=='E'){
                    cout<<1;
                    n=1;}
            else{cout<<0;
                n=0;}
        }
    }
    else{cout<<00;}

    if(c2[2]-s2[2]==1||s2[2]-c2[2]==1){
        if(n==1){cout<<1;}
        else{cout<<0;}}
    else{cout<<0;}
    return 0;
}
