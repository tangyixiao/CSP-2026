#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s,z;
    for(int i=1;i<=n;i++){
        long long a;
        char c;
        cin>>a>>c;
        for(int i=1;i<=a;i++){
            s=s+c;
        }
    }
    long long ans=0,l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r])ans++;
        l++;
        r--;
    }
    cout<<ans;
}
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
