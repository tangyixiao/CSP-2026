#include <bits/stdc++.h>
using namespace std;
long long a[200005],ans,cnt0,cnt1,l0[200005],l1[200005],n,r0[200005],r1[200005],sum,sum0,sum1;
char c0[200005],c1[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>c0[i];
		l0[i]=sum;
		sum+=a[i];
		r0[i]=sum-1;
	}
	for(int i=0;i<n;i++)
	{
		c1[n-i-1]=c0[i];
		l1[n-i-1]=sum-r0[i]-1;
		r1[n-i-1]=sum-l0[i]-1;
	}
	sum1=sum/2;
	ans=sum1;
	while(sum0<sum1)
	{
		if(sum0+a[cnt0]>=sum1)
		{
			if(c0[cnt0]==c1[cnt1])ans-=(sum1-sum0);
			break;
		}
		else
		{
			while(r0[cnt0]>=r1[cnt1])
			{
				if(c0[cnt0]==c1[cnt1])
				{
					ans-=r1[cnt1]-l0[cnt0]+1;
				}
				l0[cnt0]=r1[cnt1]+1;
				cnt1++;
			}
			if(c0[cnt0]==c1[cnt1])ans-=r0[cnt0]-l0[cnt0]+1;
			sum0+=a[cnt0];
			cnt0++;
		}
	}
	cout<<ans;
	return 0;
}
