#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int a[200010];
char c[200010];
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(ll j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	int len=s.size();
	ll ans=0;
	for(ll i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}