#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+5;
long long s[N],n,m,ans=1e9;
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s+1,s+1+n,cmp);
	for(long long i=1;i<=m;i++){
		ans=min(s[i],ans);
	}
	cout<<ans;
	return 0;
}