#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
int n,a[N];
ll sum=0;
char c[N];
string s;
bool f=0;
int main() 
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int j=1;j<=n;j++) 
	{
		cin>>a[j]>>c[j];
		if(j!=1&&c[j]!=c[j-1]) f=1;
	}
	if(f==0||n==1) 
	{
		cout<<0;
		return 0;
	}
	for(int j=1;j<=n;j++)
	{
		if(a[j]<=1e6)
		{
			for(int i=1;i<=a[j];i++) s+=c[j];
		}
		else 
		{
			cout<<0;
			return 0;
		}
	}
	for(int i=0;i<s.size()/2;i++) 
	{
		ll x=s.size()-i-1;
		if(s[i]!=s[x]) sum++;
	}
	cout<<sum;
	return 0;
}