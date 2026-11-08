#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int n;
string s;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	
	int a;
	char c;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		
		s=s+string(a,c);
	}
	
	int m=s.size();
	int ans=0;
	
	for(int i=0;i<m/2;i++)
	if(s[i]!=s[m-i-1])
	ans++;
	
	cout<<ans<<endl; 
	
	return 0;
}
