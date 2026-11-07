#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string str="";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		char c;
		cin>>c;
		str+=c;
	}
	string re_str = str;
	reverse(re_str.begin(),re_str.end());
	if(str==re_str)
	{
		cout<<0;
		return 0;
	}
	int j=n,cnt=0;
	for(int i=0;i<n;i++)
	{
		if(str[i]==re_str[i]) continue;
		else
		{
			cnt+=a[j]*1;
		}
		j--;
	}
	cout<<cnt;
	return 0;
}
