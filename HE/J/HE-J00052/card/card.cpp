#include<bits/stdc++.h>
using namespace std;
int shifou[500005];
int weizhi[500005];
int cnt[500005];
string s;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;cin >>n>>m;
    for(int i=1;i<=n;i++){
        int x;cin >>x;
        s[i]=x;
    }
    for(int i=1;i<=n;i++){
        shifou[s[i]]++;
        for(int j=i;j<=n;j++) if((shifou[i]%2==1))cnt[i]++;
    }
    for(int i=1;i<=n;i++){
        cout <<cnt[i] <<" ";
    }





return 0;
}

