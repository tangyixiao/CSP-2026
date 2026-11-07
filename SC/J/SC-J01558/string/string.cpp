#include<bits/stdc++.h>
#define int long long
#define double long double
#define fs(n) fixed<<setprecision(n)
using namespace std;
const int N=2e5+8;
int n,ans=0;
string s="";
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++) s+=c;
	}
	for(int i=1;i<=n/2;i++){
		if(s[i]!=s[n-i]) ans++;
	}
	cout<<ans;
	return 0;
}