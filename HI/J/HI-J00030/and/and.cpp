#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],maxni=-1,use[200005],vis[200005];
string ntotwo(int l,string ss)
{
	if (l == 0) return ss;
	return ntotwo(l/2,ss+=(l%2)+'0');
}
int twoton(string ss)
{
	long long l = 0;
	long long mm = 1;
	for (int i = 0;i < ss.size();i++)
	{
		l += (ss[i]-'0')*mm;
		mm*=2;
	}
	return l;
}
string andss(string sa,string sb)
{
	string m="";
	for (int i = 0;i < min(sa.size(),sb.size());i++)
	{
		if (sa[i]=='1' and sb[i]=='1') m += '1';
		else m += '0';
	}
	for (int i = min(sa.size(),sb.size());i < max(sa.size(),sb.size());i++) m += "0";
	return m;
}
void dfs(int nn)
{
	if (nn == m)
	{
		long long num = use[1];
		for (int i = 2;i <= m;i++)
		{
			num = twoton(andss(ntotwo(num,""),ntotwo(use[i],"")));
		}
		maxni = max(maxni,num);
	}
	for (int i = nn+1;i <= n;i++)
	{
		if (!vis[i])
		{
			vis[i]=1;
			use[nn+1]=a[i];
			dfs(nn+1);
			use[nn+1]=0;
			vis[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin >> n >> m;
    for (int i = 1;i <= n;i++) cin >> a[i];
    dfs(0);
    cout << maxni;
	return 0;
}
