#include<bits/stdc++.h>
using namespace std;
long long n,m,mx,l[int(2e5)+10],t[int(2e5)+10];
bool b[int(2e5)+10];
void dfs(int m,int d,int k)
{
	if(d==m)
	{
		int s=t[0];
		for(int i=1;i<d;i++)
		{
			s=s&t[i];
		}
		if(s>mx) mx=s;
		return;
	}
	for(int i=k+1;i<n;i++)
	{
		t[d]=l[i];
		dfs(m,d+1,i);
		t[d]=0;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>l[i];
	}
	dfs(m,0,-1);
	cout<<mx;
	return 0;
}
/*
1 2 3 4
1 2 3
1 2 4
1 3 4
2 3 4
*/