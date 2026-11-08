#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll n,m,ls[500005],s[500005],cnt[500005],k=0,flag;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	{
		cin>>ls[i];
	}
	for(ll i=1;i<=n;i++)
	{
		for(ll j=i;j<=n;j++)
		{
			flag=0;
			for(ll t=k;t>=1;t--)
			{
				if(s[t]==ls[j])
				{
					k=t;
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				s[k]=ls[j];
				k++;
			}
		}
		for(ll t=1;t<=k;t++)
		{
//			cout<<s[i]<<" ";
			cnt[s[i]]++;
		}
//		cout<<endl;
	}
	for(ll i=1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
}
