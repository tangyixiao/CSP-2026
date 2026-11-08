#include<bits/stdc++.h>
#define int long long
#define N 500001
using namespace std; 
int n;
int a[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	string s;
	for(int i=1;i<=n;i++) for(int j=1;j<=a[i];j++) s.push_back(c[i]);
	string rs=s;
	reverse(rs.begin(),rs.end());
	int ans=0;
	cerr<<1;
	for(int i=0;i<s.length();i++) if(s[i]!=rs[i]) ans++;
	cout<<ans;
	return 0;
}
 
