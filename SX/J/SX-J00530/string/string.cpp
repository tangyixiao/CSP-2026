#include <bits/stdc++.h>
using namespace std;
int n,a,ans;
char c;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		while(a--) s+=c;
	}
	n=s.length();
	s=' '+s;
	for(int i=1;i<=n/2;i++){
		if(s[i]!=s[n-i+1]) ans++;
	}
	cout<<ans;
	return 0;
}