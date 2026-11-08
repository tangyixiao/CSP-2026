#include<bits/stdc++.h> 
using namespace std;
const int N=2e5+1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[N],ans=0;
	char b[N];
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		s+=b[i];
	}
	for(int i=1;i<=s.size()/2+1;i++)
	{
		if(s[i]!=s[s.size()-i])
		{
			ans+=a[s.size()-i];
		}
	}
	cout<<ans;
}
