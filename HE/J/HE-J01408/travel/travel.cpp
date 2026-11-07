#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2) cout<<1;
    else cout<<'0';
    int n=0;
    for(int i=0;i<=1;i++){
        if(s1[i]!=s2[i]){
            n++;
        }
    }
    if(n==0){
        cout<<1;
        if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C') n++;
        if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') n++;
        if(n==2||n==0) {
            cout<<1;
            if(abs(s1[2]-s2[2])==1) cout<<1;
            else cout<<0;
        }
        else cout<<0;
    }
    else cout<<0<<0<<0;
    return 0;
}
