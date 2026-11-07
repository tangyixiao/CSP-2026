#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string S;
    cin>>n;
    long long a[10005];
    string b[10005];
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        for(long long j=1;j<=a[i];j++){
            S+=b[i];
        }
    }
    long long ans=0;
    for(int i=1;i<=S.size()/2;i++){
        if(!(S[i-1]==S[S.size()-1])){
           ans++;
        }
    }
    cout<<ans;
    return 0;
}

