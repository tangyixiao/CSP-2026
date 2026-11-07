#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s1,c1,s2,c2;
    cin>>s1>>c1>>s2>>c2;
    bool flag=true;
    if(s1==s2){
        cout<<1;
        string ss1=c1.substr(0,2),ss2=c2.substr(0,2);
        if(ss1==ss2){
            cout<<1;
        }else{
            flag=false;
            cout<<0;
        }
        if(flag&&(c1[2]>='A'&&c1[2]<='C'&&c2[2]>='A'&&c2[2]<='C')||(c1[2]>='D'&&c1[2]<='F'&&c2[2]>='D'&&c2[2]<='F')){
            cout<<1;
        }else{
            cout<<0;
        }
        if(ss1==ss2&&(abs(int(c1[2]-c2[2])))==1&&!(c1[2]=='C'&&c2[2]=='D')&&!(c1[2]=='D'&&c2[2]=='C')){
            cout<<1;
        }else{
            cout<<0;
        }
    }else{
        cout<<"0000";
    }

    return 0;
}
