#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ans=0;
    long long n;
    string s="";
    cin>>n;
    for(long long i=0;i<n;i++){
        long long un;
        string us;
        cin>>un>>us;
        for(long long j=0;j<un;j++){
            s+=us;
        }
    }
    for(long long i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){
            ans++;
        }
    }
    cout<<ans;

    return 0;
}
