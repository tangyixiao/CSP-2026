#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
using ll=long long;
pair<char,ll> jin[maxn];
ll ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		char c;ll b;
		cin>>b>>c;
		jin[i].first=c;
		jin[i].second=b;
	}
	int l=1,r=n;
	ll lside=0,rside=0;
	bool lc=1,rc=1;
	while(l<r){
		if(lc) lside+=jin[l].second;
		lc=0;
		if(rc) rside+=jin[r].second;
		rc=0;
		if(jin[l].first!=jin[r].first){
			ans+=min(lside,rside);
		}
		if(lside<rside){
			rside-=lside;lside=0;l++;lc=1;
		}
		else if(lside>rside){
			lside-=rside;rside=0;r--;rc=1;
		}
		else{
			lside=0,rside=0;l++;r--;lc=1;rc=1;
		}
	}
	cout<<ans;
	return 0;
}