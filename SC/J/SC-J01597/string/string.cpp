#include<bits/stdc++.h>
using namespace std;
const int N=200005;
long long n; 
long long a[N];
string c[N];
string s=""; 
long long ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=c[i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=1;j--)
		{
			if(s[i]!=s[j])
			{
				s[j]=s[i];
				ans++;
			}
		}
	}
	cout<<ans;
}