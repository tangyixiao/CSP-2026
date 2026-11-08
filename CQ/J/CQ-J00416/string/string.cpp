#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
char ch[200005];
signed main(){
    ios::sync_with_stdio(false),cin.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i]>>ch[i],sum+=a[i];
    int l=1,r=n,now=0,ans=0,suml=0,sumr=0;
    while(l<r){
        if(ch[l]==ch[r]){
            if(a[l]>a[r])a[l]-=a[r],r--;
            else a[r]-=a[l],l++;
        }
        else{
            if(a[l]>a[r])ans+=a[r],a[l]-=a[r],r--;
            else ans+=a[l],a[r]-=a[l],l++;
        }
    }
    cout<<ans;
    return 0;
}