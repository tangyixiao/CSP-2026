#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x,sum=0;
	char a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>a;
		for(int j=1;j<=x;j++)s+=a;
	}
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-i-1])sum++;
	}
	cout<<sum;
}