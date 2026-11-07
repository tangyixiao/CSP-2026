#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool f=false;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a>>b>>c>>d;
    char e=b[0],q=b[1],m=b[2];
    char p=d[0],w=d[1],n=d[2];
    if(a==c){
        cout<<1;
    }
    else{
        cout<<0;
    }
    if(e==p&&q==w){
        cout<<1;
    }
    else{
        cout<<0;
    }
    if(e==p&&q==w){
        if(m<='c'&&n<='c'){
            cout<<1;
            f=true;
        }
        else if(m>='d'&&n>='d'){
            cout<<1;
            f=true;
        }
        else{
            cout<<0;
        }
    }
    if(f&&char(m+1)==n){
        cout<<1;
    }
    else if(f&&char(n+1)==m){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
