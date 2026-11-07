#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll n,m,len=0,ans=0;
ll a[N],b[N];
char c[N],s[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);
	cin>>n;
	len=0;
	cin>>a[1]>>c[1];
	for(int i=2;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1])
		{
			a[i]+=a[i-1];
		}
		else
		{
			b[++len]=a[i-1];
			s[len]=c[i-1];
		}
	}
	b[++len]=a[n];
	s[len]=c[n];
	ll l1,l2;
	if(len==1)
	{
		cout<<0;
		return 0;
	}
	for(int i=1,j=len;i<=j;)
	{
		l1=b[i];
		l2=b[j];
		if(s[i]==s[j])
		{
			if(l1==l2)
			{
				i++;
				j--;
			}
			else
			{
				if(l1>l2)
				{
					ans+=l1-l2;
					b[i]-=l2;
					j--;
				}
				if(l1<l2)
				{
					ans+=l2-l1;
					b[j]-=l1;
					i++;
				}
			}
		}
		else
		{
			if(l1==l2)
			{
				ans+=l1;
				i++;
				j--;
			}
			if(l1>l2)
			{
				ans+=l2;
				b[i]-=l2;
				j--;
			}
			if(l1<l2)
			{
				ans+=l1;
				b[j]-=l1;
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
// i am a lala. kapawa!
