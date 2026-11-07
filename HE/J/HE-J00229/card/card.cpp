#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+10;
bool flag[N];
int n,m,a[N],b[N];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	cin>>n>>m;
	int q=0;
	memset(b,0,sizeof b);
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		flag[N]={true};
		for(int j=i;j<=n;j++)
		{
			int d=-1;
			for(int h=i;h<=j;h++)
				if(a[j]==a[h])
				{
					d=h;
					break;
				}
			for(int k=d;k<j;k++)
				flag[k]=false;
			if(flag[j]==true)
			{
				b[a[j]]++;
				q++;
			}
		}
	}
	sort(b+1,b+q+1);
	for(int i=1;i<=q;i++)
		cout<<b[i];
	return 0;
}
