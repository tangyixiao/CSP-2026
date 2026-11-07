#include <bits/stdc++.h>
#define N 200005
using namespace std;
int n,m,maxn=INT_MIN,l=0;
int chosen[N];
int v[N];
int calc()
{
	int sum=chosen[0];
	for(int i=1;i<m;i++)
	{
		sum=(sum & chosen[i]);
	}
	return sum;
}
void dfs(int p)
{
	if(l>m||p>=n)
	{
		int c=calc();
		maxn=max(maxn,c);
		return;
	}
	for(int i=0;i<2;i++)
	{
		if(i==1)
		{
			chosen[l]=v[p];
			l++;
		}
		dfs(p+1);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	dfs(0);
	cout << maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}