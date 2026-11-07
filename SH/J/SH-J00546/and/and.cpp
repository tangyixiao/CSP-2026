#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
map<ull,int> ones;
bool cmp(ull a,ull b){
	return ones[a]<ones[b];
}
void solve(){
	int n,m;cin>>n>>m;
	vector<ull> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		ull tmp=a[i];
		while(tmp){
			if(tmp&1) ones[a[i]]++;
			tmp>>=1;
		}
	}
	sort(a.begin(),a.end(),cmp);
	ull ans=a[n-1];
	for(int i=n-1;i>n-1-m;i--) ans=ans&a[i];
	cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}

