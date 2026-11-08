#include <bits/stdc++.h>
using namespace std;
const long long N=2e5+5;
string s,s2;
long long m,ans,n;
void solve(){
	cin>>m;
	for(int i=1;i<=m;i++){
		int a;char c;
		cin>>a>>c;
		n+=a;
		for(int j=1;j<=a;j++){
			s+=c;
		} 
	}
	for(int i=n;i>0;i--){
		s2[i]+=s[i];
	}
	if(s==s2){
		cout<<0;
		return;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(s[i]!=s2[i]){
				s2[i]=s[i];
				ans++;
			}
		}
	}
	cout<<ans;
	return;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t=1;
	while(t--){
		solve();
	} 
	return 0;
}
