#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,sum;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	
	for(int i=1;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		sum+=x;
		for(int i=1;i<=x;i++) s=s+c;
	}
	s=" "+s;
	int ans=0;
	for(int i=1;i<=sum;i++) if(s[i]!=s[sum+1-i]) ans++;
	cout<<ans/2<<"\n"; 
	return 0;
} 
