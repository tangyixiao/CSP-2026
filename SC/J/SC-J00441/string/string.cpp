#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	bool flag=true;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		char c;
		cin>>c;
		for(int j=0;j<x;i++)
			{
				s[j]=c;
			}
}
	
	int l=0,r=s.size()-1;
	for(int i=0;i<s.size();i++)
	{
		if(s[l]==s[r]&&l<r)
		{
			l++;
			r--;
		}
		else
		{
			flag=false;
			break;
		}
	}
	if(flag)
	{
		cout<<"0";
	}
	return 0;
}