#include <bits/stdc++.h>
using namespace std;
long long a[100005];
long long c[100005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin>>n;
	cin>>s;
	for(int i = 1;i<=n;i++)
	{
		cin>>s[i];
		cin>>a[i];
		cin>>c[i];
		if(a[i]==1&&c[i]=='a')
		{
			cout<<0<<endl;
		}
	}
	return 0;
}