#include<bits/stdc++.h>
using namespace std;
int main(){
   freopen("string.in","w",stdin);
   freopen("string.out","r",stdout);
    int n;cin>>n;
    string s;
    while(n--){
        long long x;char c;cin>>x>>c;
        for(long long i=0;i<x;i++)s.push_back(c);
    }
    int l=0,r=s.size()-1;
    long long ans=0;
    while(l<r){
        if(s[l]!=s[r]){
            ans++;
            s[r]=s[l];
        }
        l++;
        r--;
    }
    cout<<ans<<endl;
    return 0;
}