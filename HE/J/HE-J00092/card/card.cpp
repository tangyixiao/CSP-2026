#include<bits/stdc++.h>
using namespace std;
const int N=5e5+50;
long long n,m,a[N],s[N],s1,ans[N];
inline void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1;i<=n;++i){
		s1=0;
		for(int j=i;j<=n;++j){
			bool f=true;
			for(int k=1;k<=s1;++k){
				if(s[k]==a[j])s1=k,f=false;
			}
			if(f)s[++s1]=a[j];
		}
		for(int j=1;j<=m;++j){
			for(int k=1;k<=s1;++k){
				if(s[k]==j){
					++ans[j];
					break;
				}
			}
		}
	}
	cout<<ans[1];
	for(int i=2;i<=m;++i)cout<<' '<<ans[i];
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	solve();
	
	return 0;
}
