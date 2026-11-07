#include <bits/stdc++.h>
using namespace std;
long long n,x,ans=0;
string s="",a;
int main()
{
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>a;
		while(x--) s+=a;
         
		
	}
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-1-i]) ans++;
	}
	return 0;
}
