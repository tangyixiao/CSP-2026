#include<bits/stdc++.h>
using namespace std;
long long m,n;
int main()
{
	long long s[n+100]={0};
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	int zu[n]={0};
	int x=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			zu[x]=s[i]&s[j];
			x++;
		}
	}
	sort(zu,zu+x);
	cout<<zu[x-2]<<endl;
	return 0;
} 
