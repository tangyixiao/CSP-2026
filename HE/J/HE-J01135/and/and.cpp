#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[3000008];
long long ans;
long long l,r;
long long sum;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
    }
    l=1,r=m;
    for(long long i=1;i<=n-m+1;i++){
        sum=l;
        for(long long j=l;j<=r;j++){
               sum=sum&a[j];
        }
        l++;
        r++;
        ans=max(ans,sum);
    }
    cout<<ans;
    return 0;
}
