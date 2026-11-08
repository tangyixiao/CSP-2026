#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll n,t,cnt,len;
char a;
string s;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t>>a;
		while(t--)
		{
			s=s+a;
		}
	}
	len=s.size();
	for(int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-1])
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
