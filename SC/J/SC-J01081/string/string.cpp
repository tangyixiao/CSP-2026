#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct node
{
    char c;
    long long l;
    long long L,R;
};
int n;
long long l;
node a[N];
map<long long,int>mp;
long long cnt;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w"stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].l>>a[i].c;
        a[i].L=l+1,a[i].R=l+a[i].l;
        l+=a[i].l;
    }
    int mi=n;
    for(int i=1;i<=n;i++)
    {
        long long tr=l-a[i].L+1,tl=l-a[i].R+1;
        //printf("%lld %lld/n",tl,tr);
        for(int j=mi;j>=1;j--)
        {
            if(min(tr,a[j].R)>=max(tl,a[j].L))
            {
                if(a[j].c!=a[i].c)
                {
                    //printf("%d",min(tr,a[j].R)-max(tl,a[j].L));
                    cnt+=min(tr,a[j].R)-max(tl,a[j].L)+1;

                }
                mi=j;
            }
            else if(min(tr,a[j-1].R)<=max(tl,a[j-1].L))
            {
                break;
            }
        }

    }
    printf("%lld",cnt>>1);
    return 0;
}
