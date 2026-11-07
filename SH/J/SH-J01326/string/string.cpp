#include<bits/stdc++.h>
using namespace std;
long long le,sum,n,a[200005],w1=1,w2,l,r;
char b[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		le+=a[i];
	}
	w2=le;
	r=n;
	if(l%2)
	{
		while(w2-w1>1)
		{
			int mins=min(a[l],a[r]);
			if(b[r]!=b[l])sum+=mins;
			w1+=mins;
			w2-=mins;
			if(a[l]>a[r])
			{
				a[l]-=a[r];
				r--;
			}
			else if(a[l]<a[r])
			{
				a[r]-=a[l];
				l++;
			}
			else 
			{
				l++;
				r--;
			}
		}
	}
	else
	{
		while(w2-w1>0)
		{
			int mins=min(a[l],a[r]);
			if(b[r]!=b[l])sum+=mins;
			w1+=mins;
			w2-=mins;
			if(a[l]>a[r])
			{
				a[l]-=a[r];
				r--;
			}
			else if(a[l]<a[r])
			{
				a[r]-=a[l];
				l++;
			}
			else 
			{
				l++;
				r--;
			}
		}
	}
	cout<<sum;
}
