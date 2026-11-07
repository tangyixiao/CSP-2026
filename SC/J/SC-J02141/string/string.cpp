#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+10;
int n,k,a[N],s[N],ans;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i]>>c[i];
	
	for(int i=1;i<=n;++i){
		for(int j=1;j<=a[i];++j){
			s[++k]=c[i]-'0';
		}
	}
	
	for(int i=1;i<=k/2;++i){
		if(s[i]!=s[k-i+1]) ans++;
	}
	
	cout<<ans;
	return 0;
}