#include<bits/stdc++.h> 
using namespace std;
const int N=2e5+5;
long long n,ans;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//while(1) rp++;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		char c;
		cin>>x>>c;
		for(int j=1;j<=x;j++)
		{
			s+=c;
		}
	}
	s=" "+s;
	if(s.size()%2==0)
	{
		for(int i=1;i<=s.size()/2;i++)
		{
			if(s[i]!=s[s.size()-i+1])
				ans++;
		}
		cout<<ans<<endl;
	}
	else 
	{
		for(int i=1;i<=s.size()/2+1;i++)
		{
			if(s[i]!=s[s.size()-i+1])
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
