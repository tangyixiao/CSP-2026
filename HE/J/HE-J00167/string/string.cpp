#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,len[N],sum;
char a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>len[i]>>a[i];
		sum+=len[i];
	}
	int l=1,r=n;
	sum/=2;
	while(l<r)
	{
		if(a[l]==a[r])
		{
			sum-=min(len[l],len[r]);
			if(len[l]>=len[r])
			{
				len[l]-=len[r];
				r--;
			}
			else 
			{
				len[r]-=len[l];
				l++;
			}
		}else
		{
			if(len[l]>=len[r])
			{
				len[l]-=len[r];
				r--;
			}
			else 
			{
				len[r]-=len[l];
				l++;
			}
		}
	}
	sum-=(len[l]/2);
	cout<<sum;
	return 0;
} 
