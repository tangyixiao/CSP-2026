#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
long long a[500005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long h,ans=0;
	char c;
	for(int i=1;i<=n;i++)
	{
		cin>>h>>c;
		for(int j=1;j<=h;j++)
		{
			s+=c;
		}
	}
	for(int i=0;i<(s.size()+1)/2;i++)
	{
		if(s[i]!=s[s.size()-1-i])
			ans++;
	}
	cout<<ans;
	return 0;
}
