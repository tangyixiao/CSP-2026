#include<bits/stdc++.h>
using namespace std;
struct all{
    string c,s;
} r,x;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>r.c>>r.s;
    cin>>x.c>>x.s;
    if(r.c==x.c){
        if(r.s[0]==x.s[0] and r.s[1]==x.s[1]){
            if(r.s[2]>='A' and r.s[2]<='C' and x.s[2]>='A' and x.s[2]<='C'){
                if(r.s[2]=='A' and x.s[2]=='B' or r.s[2]=='B' and x.s[2]=='A' or r.s[2]=='B' and x.s[2]=='C' or r.s[2]=='C' and x.s[2]=='B') cout<<"1111";
                else cout<<"1110";
            }
            else if(r.s[2]>='D' and r.s[2]<='E' and x.s[2]>='D' and x.s[2]<='E') cout<<"1111";
            else cout<<"1100";
        }
        else cout<<"1000";
    }
    else cout<<"0000";
    return 0;
}
