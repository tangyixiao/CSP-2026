#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char c[200010];
struct Node
{
	int x;
	int cnt;
}z[200010];
int main()
{
	freopen("string.in",r,stdin);
	freopen("string.out",w,stdout);
	long long n,tot=0,maxid=0,maxn=0,pur=0;
	bool flag=1,flag2=1;
	string s;
	cin>>n;
	for (long long i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		tot+=a[i];
		for (long long i=1;i<=a[i];i++) s+=c[i];
		if (maxn<a[i]) maxid=i;
		maxn=max(maxn,a[i]);
		z[c[i]-'0'+'0'].cnt+=a[i];
	}
	for (long long i=2;i<=n;i++) if (c[i]!=c[i-1]) flag=0;
	if (flag){
		cout<<0;
		return 0;
	}
	for (int i=1;i<=25;i++)
	{
		if (z['a'+1].cnt!=0&&z['a'+i-1].cnt!=0&&z['a'+i].cnt!=z['a'+i-1].cnt) flag2=0;
	}
	if (flag2)
	{
		while (z['a'+pur].cnt==0) pur++;
		cout<<z['a'+pur].cnt;
	}
	if (n==1) cout<<0;
	if (n==2) cout<<min(a[1],a[2]);
	if (tot%2)
	{
		if (s[tot/2+1]!=a[maxid])
		{
			cout<<tot-maxn-1;
		}
		else
		{
			cout<<tot-maxn;
		}
	}
	else
	{
		cout<<tot-maxn;
	}
	return 0;
}
