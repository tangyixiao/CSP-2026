#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a[200005],l,ans;
char ch[200005];
string s;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i]>>ch[i];
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=a[i];j++){
            s[i*a[i]+j]=ch[i];
        }
    }
    for (int i=1;i<=s.size()/2+1;i++){
        if (s[i]!=s[l-i]+1){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
