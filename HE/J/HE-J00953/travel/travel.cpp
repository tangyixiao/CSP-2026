#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    int ch=0,p=0,ce=0,lin=0,a=abs(s1[2]-s2[2]);
    if(c1==c2){
        ch=1;
        if(s1[0]+s1[1]==s2[0]+s2[1]){
            p=1;
            if((a==1 && !((s1[2]=='C' && s2[2]=='D')||(s1[2]=='D' && s2[2]=='C'))) || (a==2 && (s1[2]=='A' || s2[2]=='A')) || (a==2 && (s1[2]=='F' || s2[2]=='F'))){
                ce=1;
                if(a==1 || (s1[2]=='F' && s2[2]=='D')||(s1[2]=='D' && s2[2]=='F')){
                    lin=1;
                }
            }
        }
    }
    cout<<ch<<p<<ce<<lin;

    return 0;
}
