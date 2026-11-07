#include<bits/stdc++.h>
using namespace std;
int n,m,sum,ans;
string str,a; 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>m;
		cin>>a;
		sum+=m;
		for(int i=1; i<=m; i++)
			str+=a;
	}
	for(int i=0; i<sum; i++)
	{

		if(str[i]!=str[sum-1-i])
		{
			ans++;
			str[sum-1-i]=str[i];
		}
	}
	cout<<ans;
	return 0;
}