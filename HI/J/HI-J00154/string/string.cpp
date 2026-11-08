#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
const int MAXN=2e5+5;
struct node
{
	char c;
	int sum;
}a[MAXN];
string s1,s2; 
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].sum>>a[i].c;
	}
	int l=1,r=n;
	while(l<r)
	{
		int ca=min(a[l].sum,a[r].sum);
		if(a[l].c!=a[r].c)
		{
			ans+=ca;
		}
		a[l].sum-=ca;
		a[r].sum-=ca;
		if(a[l].sum==0)l++;
		if(a[r].sum==0)r--;
	}
	cout<<ans;
}
