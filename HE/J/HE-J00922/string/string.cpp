#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x,y,z,ans=0;
	string s;
	char a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>a;
		for(int j=1;j<=x;j++)
		{
			s+=a;
		}
	}
	y=0;
	z=s.size()-1;
	while(y<=z)
	{
		if(s[y]!=s[z])
		{
			ans++;
		}
		y++;
		z--;
	}
	cout<<ans;
	return 0;
}
