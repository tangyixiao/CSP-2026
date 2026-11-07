#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	int n;
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i]>>c[i];
	int mx=*max_element(a+1,a+n+1);
	if(mx<=500)
	{
		string s;
		for(int i=1;i<=n;++i) s.append(a[i],c[i]);
		int len=s.size(),cnt=0;
		for(int i=0;i<len/2;++i)
		{
			if(s[i]!=s[len-i-1]) ++cnt;
		}
		cout<<cnt;
	}
	else
	{
		long long sum=0;
		for(int i=1;i<=n;++i) sum+=a[i];
		cout<<sum/2;
	}
	return 0;
}//68 TLE 
