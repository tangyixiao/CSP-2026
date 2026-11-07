#include"bits/stdc++.h"
using namespace std;
int a,b;
int f=0;
char a1,a2;
string s1,s2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a>>s1>>b>>s2;
    if(a==b){
        cout<<1;
    }else{
        cout<<0<<0<<0<<0;
        return 0;
    }
    if(s1[0]*10+s1[1]==s2[0]*10+s2[1]){
        cout<<1;
    }else{
        cout<<0<<0<<0;
        return 0;
    }
    char a=s1[2];
    char b=s2[2];
    if(a&&b=='a'||'b'||'c'){
        f=1;
    }else{
    if(a&&b=='d'||'f'){
        f=1;
    }
    }
    if(f==1){
        cout<<1;
    }else{
        cout<<0<<0;
    }
    if(a-b==1||b-a==1){
        cout<<1;
    }else{
        cout<<0;
    }
}
