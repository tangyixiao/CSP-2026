#include<bits/stdc++.h>
using namespace std;
string s;
long long n,a;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for(long long i=1;i<=n;i++){
        char c;
        cin>>a>>c;
        while(a--){
            s+=c;
        }
    }
    long long x=s.size(),ans=0;
    for(long long i=0;i<=(s.size()-1)/2;i++){
        if(s[i]!=s[x-i-1]){
            ans++;
        }
    }
    cout<<ans;
}
