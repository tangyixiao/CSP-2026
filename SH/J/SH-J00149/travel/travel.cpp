#include<bits/stdc++.h>
using namespace std;
bool pd(char a,char b){
    return (abs(a-b)==1||((a=='D'&&b=='F')||a=='F'&&b=='D'))&&!((a=='C'&&b=='D')||(a=='D'&&b=='C'));
}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int ca,cb,a,b;
    char a1,b1;
    cin>>ca>>a>>a1>>cb>>b>>b1;
    bool s1=ca==cb,s2=s1&&a==b,s3=s2&&((a1<='C'&&b1<='C')||(a1>'C'&&b1>'C')),s4=s3&&pd(a1,b1);
    cout<<s1<<s2<<s3<<s4;
    return 0;
}
