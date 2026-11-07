#include<bits/stdc++.h>
using namespace std;
int n,a,ans=0;
string s=" ",x;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>x;
		for(int j=0;j<a;j++)
		{
			s+=x;
		}
	}
	int b=s.length()-1;
	for(int i=1;i<=b;i++)
	{
		if(s[i]!=s[b-i+1]) ans++;
	}
	cout<<ans/2;
	return 0;
}