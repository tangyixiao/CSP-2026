#include<bits/stdc++.h>
using namespace std;

signed main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    bool f=true;
    if(s1!=s3) f=false;
    putchar(f?'1':'0');
    if(s2[0]!=s4[0]||s2[1]!=s4[1]) f=false;
    putchar(f?'1':'0');
    int p=s2[2]-'A',q=s4[2]-'A';
    if((p<=2&&q>2)||(p>2&&q<=2)) f=false;
    putchar(f?'1':'0');
    if(abs(p-q)!=1) f=false;
    putchar(f?'1':'0'); 
    return 0;
}