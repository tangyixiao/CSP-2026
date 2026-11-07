#include   <bits/stdc++.h>
using namespace std;
string s1,s2,e1,e2;
void solve(){
    cin>>s1>>s2>>e1>>e2;
    if(s1!=e1){
        cout<<"0000";
        return;
    }
    int s,e;
    s=(s2[0]-'0')*10+(s2[1]-'0');
    e=(e2[0]-'0')*10+(e2[1]-'0');
    if(s!=e){
        cout<<"1000";
        return;
    }
    char cs=s2[2],ce=e2[2];
    if(!((cs<='C'&&cs>='A'&&ce<='C'&&ce>='A')||((cs=='D'&&ce=='F')||(cs=='F'&&ce=='D')))){
        cout<<"1100";
        return;
    }
    if(cs<='C'&&cs>='A'&&ce<='C'&&ce>='A'){
        if(abs(ce-cs)==1){
            cout<<"1111";
        }
        else cout<<"1110";
    }
    else cout<<"1111";
    return;
}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0 ;
}
