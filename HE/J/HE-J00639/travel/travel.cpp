#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string c1,c2,s1,s2;
    cin>>c1>>s1>>c2>>s2;
    bool u,t,p,f;u=p=t=f=0;
    if(c1==c2){
        u=1;
        if(s1[0]==s2[0] and s1[1]==s2[1]){
            t=1;
            if((s1[2]=='A' and (s2[2]=='B' or s2[2]=='C')) or (s1[2]=='B' and (s2[2]=='A' or s2[2]=='C')) or (s1[2]=='C' and (s2[2]=='B' or s2[2]=='A')) or (s1[2]=='D' and s2[2]=='F') or (s1[2]=='F' and s2[2]=='D')){
                p=1;
                if(abs(s1[2]-s2[2])==1 and !(max(s1[2],s2[2])=='D' and min(s1[2],s2[2])=='C')){
                    f=1;
                }
            }
        }
    }
    cout<<u<<t<<p<<f;
    return 0;
}
