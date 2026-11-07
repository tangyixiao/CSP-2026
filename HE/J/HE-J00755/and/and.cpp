#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 200005;
ll a[N],b[N],B[N],c[101],d,e[101],f[101],k,K,I,m,n,ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	f[0] = 1;
	for(int i = 1;i <= 31;i++)
	{
		f[i] = 2 * f[i - 1];
	}
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i];
		B[i] = i;
		e[0] += a[i] % 2;
		for(int j = 0;j <= 30;j++)
		{
			e[j + 1] += (a[i] / f[j]) % 2;
		}
	}
	d = -1;
	for(int i = 30;i >= 0;i--)
	{
		if(e[i] >= m)
		{
			d = i;
			break;
		}
	}
	if(d < 0)
	{
		cout<<0<<endl;
		return 0;
	}
	I = 0;
	c[0] = d;
	K = n;
	while(c[I] >= 0)
	{
		k = 0;
		for(int i = 1;i <= K;i++)
		{
			if(((a[B[i]] / f[c[I] - 1]) % 2) == 1)
			{
				b[++k] = B[i];
			}
		}
		for(int i = 0;i <= 31;i++)
		{
			e[i] = 0;
		}
		for(int i = 1;i <= k;i++)
		{
			e[0] += a[b[i]] % 2;
			for(int j = 0;j < c[I] - 1;j++)
			{
				e[j + 1] += (a[b[i]] / f[j]) % 2;
			}
		}
		I++;
		c[I] = -1;
		for(int i = 30;i >= 0;i--)
		{
			if(e[i] >= m)
			{
				c[I] = i;
				break;
			}
		}
		if(c[I] == 0)
		{
			//cout<<c[I]<<endl;
			break;
		}
		for(int i = 1;i <= k;i++)
		{
			B[i] = b[i];
		}
		K = k;
		//cout<<c[I]<<endl;
	}
	//cout<<I<<endl;
	for(int i = 0;i < I;i++)
	{
		ans+= f[c[i] - 1];
	}
	cout<<ans<<endl;
	return 0;
 } 
