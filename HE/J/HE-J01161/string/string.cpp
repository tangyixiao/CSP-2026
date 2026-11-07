#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);	
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for(int i=0;i<n;i++)
	{
		int c;
		cin>>c;
		string b;
		cin>>b;
		for(int j=0;j<c;j++)
		{
			s+=b;
		}
	}
	int cnt=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s[s.size()-i-1])
		{
			s[s.size()-i-1]=s[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
