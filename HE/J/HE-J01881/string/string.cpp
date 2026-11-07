#include<bits/stdc++.h>
using namespace std;
long long n,a,sum,x,e;
char c;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(int k=1;k<=a;k++)
			s+=c;
	}
	e=s.size();
	if(s.size()%2==0)
	  x=s.size()/2;
	else
	  x=(s.size()+1)/2;
	for(int i=0;i<x;i++)
	{
		e--;
		if(s[i]!=s[e])
		  sum++;
	}
	cout<<sum;
	return 0;
}
