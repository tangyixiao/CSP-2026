#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans,l,r;
char s[200005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i]>>s[i];
    l=1;
    r=n;
    while(l<r){
        long long cnt=0,q=0;
        if(s[l]!=s[r]){
            cnt=min(a[l],a[r]);
            if(cnt==a[l]) q=l;
            else q=r;
        }
        ans+=cnt;
        if(q==l){
            a[r]-=a[l];
            l++;
        }
        else if(q==r){
            a[l]-=a[r];
            r--;
        }
        else{
            if(a[l]>a[r]){
                a[l]-=a[r];
                r--;
            }
            else if(a[r]>a[l]){
                a[r]-=a[l];
                l++;
            }
            else{
                l++;
                r--;
            }
        }
    }
    cout<<ans;
    return 0;
}
