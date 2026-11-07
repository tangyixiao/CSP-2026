#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200005];
	int l=0,ans=0;
	string s[200005],hw;
	cin>>n;
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>s[i];
		for(int j=0;j<a[i];j++)
		{
			hw+=s[i];
			l++;
		}
	}
	
	for(int i=0;i<l/2;i++)
	{
		if(hw[i]!=hw[l-1-i])
			ans++;
		
	}
	cout<<ans;
	return 0;
}
