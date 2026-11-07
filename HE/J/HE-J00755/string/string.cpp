#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 200005;
ll a[N],b,L,z,q,h,f,e,j,n,sum[N],ans;
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i]>>c[i];
		sum[i] = sum[i - 1] + a[i];
	}
	z = sum[n] / 2;
	//cout<<sum[n]<<endl;
	for(int i = 1;i <= n;i++)
	{
		if(sum[i] > z)
		{
			b = i - 1;
			break;
		}
	}
	j = b + 1;
	f=z;
	e = sum[n] - z + 1;
	h = sum[j] - e + 1;
	e = sum[j];
	//cout<<sum[b - 1]<<endl;
	for(int i = b;i >= 0;i--)
	{
		q = f - sum[i];
		//cout<<q<<endl;
		f = sum[i];
		while(h < q)
		{
			//cout<<h<<' '<<q<<endl;
			if(c[i + 1] != c[j])
			{
				ans += h;
			}
			q -= h;
			j++;
			h = sum[j] - e;
			e = sum[j];
		}
		if(c[i + 1] != c[j])
		{
			ans+=q;
		}
		h -= q;
		//cout<<ans<<endl;
	}
	cout<<ans<<endl;
 } 
