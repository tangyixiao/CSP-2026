#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005],sum,suml;
char c[200005];
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		sum+=a[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=c[i];
		}
	}
	int sump=sum;
	for(int i=0;i<=sump/2;i++)
	{
		sum--;
		if(s[i]!=s[sum])
		{
			suml++;
			s[i]=0;
			s[sum]=0;
		}
	}
	cout<<suml;
	return 0;
}
