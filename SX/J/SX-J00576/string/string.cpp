#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
string s;
int main() 
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	while(n--)
	{
		long long a;
		string c;
		cin>>a>>c;
		for(int i=1;i<=a;i++)
		{
			s+=c;
		}
	}
	for(int i=0;2*i<int(s.size());i++)
	{
		if(s[i]!=s[int(s.size())-i-1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
