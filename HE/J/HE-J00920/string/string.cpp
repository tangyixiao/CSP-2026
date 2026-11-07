#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=3e5+10;
struct node
{
    int num;
    char c;
}p[N];
signed main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>p[i].num>>p[i].c;
    int l=1,r=n;
    while(l<r)
    {
        if(p[l].c!=p[r].c)
        {
            if(p[l].num>p[r].num)
            {
                p[l].num-=p[r].num;
                ans+=p[r].num;
                r--;
            }else{
                p[r].num-=p[l].num;
                ans+=p[l].num;
                l++;
            }
        }else{
            if(p[l].num>p[r].num)
            {
                p[l].num-=p[r].num;
                r--;
            }else{
                p[r].num-=p[l].num;
                l++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
