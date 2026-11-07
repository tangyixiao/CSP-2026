#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int n;
int a[N];
char f[N];
string s="1";
string t="1";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>f[i];
		while(a[i]--)
		{
			s+=f[i];
		}
	}
	s.erase(0,1);
	
	int w=0;
	for(int i=s.size()-1;i>=0;i--)
	{
		t[w]=s[i];
		w++;
	}
	int sum=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=t[i]) sum++;
	}
	cout<<sum/2;
	return 0;
}
