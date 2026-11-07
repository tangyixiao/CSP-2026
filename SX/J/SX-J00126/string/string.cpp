#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
int n;
string s;
//int a[N];
ll ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		char c;
		int t;
		cin>>t>>c;
		for(int j=1;j<=t;j++) s+=c;
	}
	for(int i=0,j=s.size()-1;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			ans++;
			s[i]=s[j];
		}
	}
	cout<<ans;//I can't do it TAT
	return 0;
}
//freeopen(
//freopen(
//freoopen(
