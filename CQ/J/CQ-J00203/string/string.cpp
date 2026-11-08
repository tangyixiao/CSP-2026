#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,last=1,ans;
string s;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ll cnt;
        string c;
        scanf("%lld",&cnt);
        cin >> c;
        for(int i=1;i<=cnt;i++){
            s+=(string)(c);
        }
    }
    int bs=s.size()/2+(s.size()%2!=0);
    for(int i=0,j=s.size()-1;i<bs,j>=s.size()-bs;i++,j--){
        if(s[i]!=s[j]) ans++;
    }
    cout << ans;
    return 0;
}
/*
*/