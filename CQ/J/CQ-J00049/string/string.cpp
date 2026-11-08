#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char c[200005];
//char ce[200000002];
long long L,mid,l,r,ans,sum,m,e;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;

	long long len=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>c[i];
		L+=a[i];
//		for(;len<=L;len++)ce[len]=c[i];
	}
/*
//	for(int i=1/;i<=L;i++)cout<<ce[i];
	cout<<endl;
	len=L/2;
	for(int i=1;i<=len;i++)
	{
		if(ce[i]!=ce[L-i+1])ans++;
	}
	cout<<ans;
*/


	mid=L/2;
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
		if(sum>mid)
		{
			m=i;
			break;
		}
	}
	sum=0;
	r=L;
	for(int i=1;i<m;i++)
	{
		r=L-sum+1;
		sum+=a[i];
		l=L-sum+1;
		e=0;
		int j=n;
		long long el=L-e+1,er=L-e+a[j]+1;
		for(;j>m;j--)
		{
			e+=a[j];
			el=L-e+1,er=L-e+a[j]+1;
//			long long lr=r-l+1;
			if(c[j]!=c[i])
			{
				ans+=min(r,er)-max(l,el)+1;
			}
		}
//		ans+=min(r,er)-max(mid,el)+1;
	}
	cout<<ans;
	return 0;
}
/*
1 a
2 c
1 a
1 e
1 a
1 b
2 c
acca e abcc
123456789
L=9
mid=4
m=4

aaabcb
123456
L=6
mid=3
m=2
*/
