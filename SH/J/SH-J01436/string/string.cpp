#include<bits/stdc++.h>
using namespace std;
int n;
long long a,ans;
char c;
string s;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a>>c;
        for(long long j=1;j<=a;++j){
            s+=c;
        }
    }
    for(long long i=0;i<=s.length()/2-1;++i){
        if(s[i]!=s[s.length()-1-i]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
