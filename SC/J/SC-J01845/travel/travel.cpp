#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c>>s>>cc>>ss;
    char fl1='0',fl2='0',fl3='0',fl4='0';
    if(c==cc){
        fl1='1';
    }
    if(c==cc&&s[0]==ss[0]&&s[1]==ss[1]){
        fl2='1';
    }
    int b=0,bb=0;
    if(s[2]=='D'||s[2]=='F')b=1;
    if(ss[2]=='D'||ss[2]=='F')bb=1;
    if(c==cc&&s[0]==ss[0]&&s[1]==ss[1]&&b==bb)fl3='1';
    int a=s[2],aa=ss[2];
    if(s[2]=='D'||s[2]=='F')a++;
    if(ss[2]=='D'||ss[2]=='F')aa++;
    if(c==cc&&s[0]==ss[0]&&s[1]==ss[1]&&abs(a-aa)==1)fl4='1';
    cout<<fl1<<fl2<<fl3<<fl4;
}