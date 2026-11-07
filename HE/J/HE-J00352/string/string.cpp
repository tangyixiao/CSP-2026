#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
ll n,a[N],sum=0,d=0,w,l,r,sum2,ans=0,j,s;
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i]>>c[i],sum+=a[i];
	j=n;
	for(int i=1;i<=n;++i)
	{
		if(d+a[i]>=sum/2)
		{
			d=sum/2;
			while(w<d)
			{
				if(s)
				{
					if(w+s>d)
					{
						if(c[i]!=c[j]) ans+=d-w;
						s=w+s-d;
						w+=d-w;
						break;
					}
					else
					{
						if(c[i]!=c[j]) ans+=s;
						j--;
						w+=s;
						s=0;
					}
				}
				else
				{
					if(w+a[j]>d)
					{
						if(c[i]!=c[j]) ans+=d-w;
						s=w+a[j]-d;
						w+=d-w;
						break;
					}
					else
					{
						if(c[i]!=c[j]) ans+=a[j];
						w+=a[j];
						j--;
						s=0;
						
					}
				}
			}
			break;
		}
		d+=a[i];
		while(w<d)
		{
			if(s)
			{
				if(w+s>d)
				{
					if(c[i]!=c[j]) ans+=d-w;
					s=w+s-d;
					w+=d-w;
					break;
				}
				else
				{
					if(c[i]!=c[j]) ans+=s;
					j--;
					w+=s;
					s=0;
				}
			}
			else
			{
				if(w+a[j]>d)
				{
					if(c[i]!=c[j]) ans+=d-w;
					s=w+a[j]-d;
					w+=d-w;
					break;
				}
				else
				{
					if(c[i]!=c[j]) ans+=a[j];
					w+=a[j];
					j--;
					s=0;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
