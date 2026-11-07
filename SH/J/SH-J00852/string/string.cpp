#include <bits/stdc++.h>
using namespace std;
int n;
struct S
{
	long long a;
	char c;
} s[200005];
long long ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>s[i].a>>s[i].c;
	}
	int l=1,r=n;
	while (l<r)
	{
		if (s[l].c!=s[r].c)
		{
			ans+=min(s[l].a,s[r].a);
		}
		if (s[l].a<s[r].a)
		{
			s[r].a-=s[l].a;
			l++;
		}
		else if (s[l].a>s[r].a)
		{
			s[l].a-=s[r].a;
			r--;
		}
		else
		{
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
} 
