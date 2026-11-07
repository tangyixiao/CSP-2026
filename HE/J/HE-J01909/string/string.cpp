#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a[10000]={};
	char ch;
	cin>>n;
	string s,ss;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>ch;
		for(int j=1;j<=a[i];j++)
		{
			s+=ch;
		}
	}
	int l=s.size();
	for(int i=l;i>=1;i--)
	{
		ss+=s[i];
	}
	if(s==ss){cout<<"0";}
	else if(l%2==1)
	{
		cout<<l/2;
	}
	return 0;
}
