#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n;
struct STR
{
	ll id;
	string ic;
}a[200005];
string s,p;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll m=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].id>>a[i].ic;
		for(int j=1;j<=a[i].id;j++)
		{
			s+=a[i].ic;
			m++;
		}
	}
	p=s;
	reverse(s.begin(),s.end());
	if(p==s)
	{
		cout << 0;
		return 0; 
	}
	ll l=1,r=m,ans=0;
	while(l<=r)
	{
		if(s[l]!=s[r])
		{
			s[r]=s[l];
			ans++;
		}
		l++;
		r--;
	} 
	cout << ans << "\n";
	return 0;
}
