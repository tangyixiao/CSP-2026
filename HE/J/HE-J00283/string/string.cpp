#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	for (int i=1;i<=n;++i)cin>>a[i]>>c[i];
	string s="";
	for (int i=1;i<=n;++i){
		for (int j=1;j<=a[i];++j)s+=c[i];
	}
	int sz=s.size();
	int ans=0;
	for (int i=0;i<sz/2;++i){
		ans+=(s[i]!=s[sz-i-1]);
	}
	cout<<ans;
	return 0;
}
