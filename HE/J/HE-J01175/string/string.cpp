#include<bits/stdc++.h>
using namespace std;
int n,a[200010],cnt=0;
char c[200010];
string s="";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	bool f=0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1; j<=a[i]; j++)
		{
			s+=c[i];
		} 
		if(c[i]!=c[i-1] && i!=0)
		{
			f=1;
		}
	}
	if(f==0)
	{
		cout<<"0";
		return 0;
	}
	if(n==2)
	{
		cout<<min(a[0],a[1]);
		return 0;
	}
	int l=s.size();
	for(int i=0; i<=l; i++)
	{
		if(s[i]!=s[l-1-i])
		{
			cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}
