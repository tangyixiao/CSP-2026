#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char l[200005];
long long sum=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	cin>>n;
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	if(n==2)
	{
		int x,xx;
		char y,yy;
		cin>>x;cin>>y;
		cin>>xx;cin>>yy;
		if(y==yy)
		{
			cout<<0;
		}
		else
		{
			cout<<min(x,xx);
		}
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>l[i];
	}
	return 0;
} 
