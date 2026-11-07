#include <bits/stdc++.h>
typedef long long ll;
const ll MAXN=200005;
ll a[MAXN];
char c[MAXN]; 
char s[1000000000]={0};
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","W",stdout);
	int n;
	cin>>n;
	int l=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>c[i];
		s[l]=c[i];
		l+=a[i];
	}
	char cur=s[1];
	for(int i=1;i<=l;i++)
	{
		if(s[i]==0)
		{
			s[i]=cur;
		}
		else
		{
			cur=s[i];
		}
	}
	int ans=0;
	if(l%2==0) l/=2;
	else
	{
		l/=2;
		l++;
	} 
	for(int i=1;i<=l;i++)
	{
		if(s[i]!=s[l-i+1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
