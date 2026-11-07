#include<bits/stdc++.h>
using namespace std;  
#define int long long
int n,ans;
const int x=2e5+10;
string s;
int a[x];
char c[x];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)
		s+=c[i];
	}
	for(int i=1;i<=n/2;i++)
	{
		if(s[i]!=s[n+1-i])
		ans++;
	}	
	cout<<ans*2;
	return 0;
}