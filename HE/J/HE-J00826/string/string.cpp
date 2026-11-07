#include<bits/stdc++.h>
using namespace std;
int n;
struct strn
{
	long long n;
	char v;
}a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i].n >> a[i].v;
	}
	int l=1;
	int r=n;
	int ans=0;
	if(n==1)
	{
		cout << ans;
		return 0;
	}	 
	if(n==2)
	{
		if(a[1].v==a[2].v) cout << ans;
		else cout << min(a[1].n,a[2].n);
		return 0;
	}
	if(n<=10)
	{
		l=0;
		r=0;
		string s="";
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=a[i].n;j++)
			{
				s+=a[i].v;
				r++;
			}
		}
		r--;
		while(l<=r)
		{
			if(s[l]==s[r])
			{
				l++;
				r--;
				continue;
			}
			ans++;
			l++;
			r--;
		} 
		cout << ans;
		return 0;
	}
	while(l<=r)
	{
		int mi;
		int lcnt=a[l].n;
		int rcnt=a[r].n;
		if(a[l].v==a[r].v)
		{
			mi=min(lcnt,rcnt);
			lcnt-=mi;
			rcnt-=mi;
		}else if(a[l].v!=a[r].v)
		{
			if(lcnt<rcnt) mi=lcnt;
			else mi=rcnt;
			ans+=mi;
			lcnt-=mi;
			rcnt-=mi;
		}
		if(lcnt==0) l++;
		if(rcnt==0)	r--;
	}
	cout << ans;
	return 0;
}
