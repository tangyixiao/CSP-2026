#include<bits/stdc++.h>
using namespace std;
long long n,i,a[200020],o,l;
char s[200020];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)cin>>a[i]>>s[i];
	l=n;
	for(i=1;i<l;i++)
	{
		if(a[i]==0)continue;
		if(a[l]==0)
		{
			l--;
			continue;
		}
		if(a[i]<a[l])
		{
			if(s[i]!=s[l])o+=a[i];
			a[l]-=a[i];
		}
		else if(a[i]>a[l])
		{
			if(s[i]!=s[l])o+=a[l];
			a[i]-=a[l];
			l--;
			i--;
		}
		else if(a[i]==a[l])
		{
			if(s[i]!=s[l--])o+=a[i];
		}
	}
	cout<<o;
}