#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    long long a;
    string s="";
    string c;
    cin >> n;
    long long lsee=0;
    for(int i=1;i<=n;i++){
        cin >> a >> c;
        for(int j=1;j<=a;j++){
            s+=c;
        }
        lsee+=a;
    }
    long long l=0,r=0;
    long long ans=0;
    for(int k=0;k<s.size()/2;k++){
        l=s[k]-'a'+1;
        r=s[lsee-k-1]-'a'+1;
        if(l!=r){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
