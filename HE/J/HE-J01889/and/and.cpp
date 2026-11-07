#include<bits/stdc++.h>
using namespace std;
int n,m;
long long s=-1;
int a[200005];
int b[100005];
bool c[200005];
void D(int x)
{
	if(x==m+1)
	{
		long long e=b[1];
		for(int i=2;i<=m;i++)
		e=(e&b[i]);
		s=max(e,s);
		return;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(c[i]==0)
			{
				c[i]=1;
				b[x]=a[i];
				D(x+1); 
				c[i]=0; 
			}
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	D(1);
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/
