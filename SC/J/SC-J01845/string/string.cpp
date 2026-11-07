#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
int a[N];
char c[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
    }
    int l=1,r=n;
    long long ans=0;
    while(l<r){
        int p=0;
        if(a[l]<a[r])p=l;
        else p=r;
        int ap=a[p];
        if(c[l]!=c[r]){
            ans+=ap;
        }
        a[l]-=ap;
        a[r]-=ap;
        if(!a[l])l++;
        if(!a[r])r--;
    }
    cout<<ans;
}