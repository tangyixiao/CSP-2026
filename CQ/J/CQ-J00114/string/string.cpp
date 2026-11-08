#include<bits/stdc++.h>
using namespace std;
int n,a[200001],lst;
long long sum[200001],ans,l[200001],r[200001];
char c[200001];
bool vis[200001];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	lst=n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i],sum[i]=sum[i-1]+a[i],l[i]=sum[i-1]+1,r[i]=sum[i];
	for(int i=1;i<=n;i++)
	{
		if(vis[i])
			break;
		vis[i]=1;
		long long l2=sum[n]+1-r[i];
		for(int j=lst;j>=1;j--)
		{
			if(l[j]>=l2)
			{
				if(c[i]!=c[j])
					ans+=r[j]-l[j]+1;
				vis[j]=1;
				lst=j-1;
				r[j]=l[j]-1; 
			}
			else if(r[j]<l2)
				break;
			else
			{
				if(c[i]!=c[j])
					ans+=r[j]-l2+1;
				r[j]=l2-1;
				lst=j;
//				cerr<<i<<' '<<j<<'\n';
				break;
			}
		}
//		cerr<<ans<<'\n';
//		for(int i=1;i<=n;i++)
//			cerr<<l[i]<<' '<<r[i]<<'\n';
//		cerr<<"------------\n";
	}
	cout<<ans;
	return 0;
}
/*
5
1 a
2 b
3 c
4 d
5 a

abbcccddddaaaaa

abbcccdddcccbba

5
*/
