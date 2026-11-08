#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long q;
		char a;
		cin>>q>>a;
		for(int j=1;j<=q;j++)
		{
			s+=a;
		}
	}
	int x=s.size()-1;
	for(int i=0;i<=s.size();i++)
	{
		if(s[i]!=s[x])
		{
			cnt++;
		}
		x--;
	}
	if(n%2==0) cout<<cnt;
	else cout<<cnt/2;
	return 0;
}
