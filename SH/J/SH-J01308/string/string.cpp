#include<bits/stdc++.h>
using namespace std;
int n;
int x;
int sum,ans;
char s;
char a[200000];

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>s;
		for(int j=sum+1;j<=sum+x;j++)
		{
			a[j]=s;
		}
		sum+=x;
	}
	for(int i=1;i<=sum/2;i++)
	{
		if(a[i]!=a[sum+1-i])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
