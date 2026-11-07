#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m,cnt[1000010];
    cin>>n>>m;
    int a[1000010];
    cin>>a[1000010];
    for(int i=0;i<=n;i++){
        cnt[i]=a[i];
    }
    cout<<cnt[1000010];
    return 0;
}
