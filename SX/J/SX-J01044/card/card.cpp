#include <bits/stdc++.h>
using namespace std;
#define int long long//注意数据范围
#define fr(i,a,b) for(int i=a;i<=b;i++)
int a[500005];
int sv[300005],sp[300005];
int num[300005];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,k=0;
	cin>>n>>m;
	fr(i,1,n)
		cin>>a[i];
	fr(i,1,n)
	{
		k=0;
		memset(sv,0,sizeof(sv));
		memset(sp,0,sizeof(sp));
		fr(j,i,n)
		{
			if(sp[a[j]]==0)
			{
				sv[++k]=a[j];
				sp[a[j]]=k;
			}
			else
			{
				fr(t,sp[a[j]]+1,k)
					sp[sv[t]]=0;
				k=sp[a[j]];
				sv[k]=a[j];
			}
		}
		fr(j,1,k)
			num[sv[j]]++;
	}
	fr(i,1,m)
		cout <<num[i]<<' ';
	return 0;
}
//rp++;