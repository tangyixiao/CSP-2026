#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	string s="";
	long long n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		while(a--)
		{
			s+=c;
		}
	}
	
	string str1=s.substr(0,s.size()/2),str2=s.substr(s.size()/2+s.size()%2);
	int str2l=str2.size();
	for(int i=0;i<str1.size();i++)
	{
		if(str1[i]!=str2[str2l-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}
