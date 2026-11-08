#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
string s;
vector<string> ans;
void dfs(int step,int k){
	if(step==n){
		if(k==m) ans.push_back(s);
		return ;
	}
	s.push_back('1');
	dfs(step+1,k+1);
	s.pop_back();
	s.push_back('0');
	dfs(step+1,k);
	s.pop_back();
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		int as=0;
		for(int i=1;i<=n;i++) as=max(as,a[i]);
		cout<<as;
		return 0;
	}
	if(m==n){
		int as=a[1];
		for(int i=2;i<=n;i++) as&=a[i];
		cout<<as;
		return 0;
	}
	if(m==n-1){
		int cnt[32]={0},as=0;
		for(int i=1;i<=n;i++){
			bitset<32> aa(a[i]);
			for(int j=0;j<32;j++) cnt[j]+=(aa[j]==0?1:0);
		}
		for(int i=1;i<=n;i++){
			bitset<32> aa(a[i]);
			int ass=0;
			for(int j=0;j<32;j++) if((!aa[j]&&cnt[j]==1)||!cnt[j]) ass+=pow(2,j);
			as=max(as,ass);
		}
		cout<<as;
		return 0;
	}
	if(m==2){
		int as=0;
		for(int i=1;i<=n;i++) for(int j=i+1;j<=n;j++) as=max(as,a[i]&a[j]);
		cout<<as;
		return 0;
	}
	dfs(0,0);
	int ass=0;
	for(auto x:ans){
		int as=INT_MAX;
		for(int i=1;i<=n;i++) if(x[i-1]=='1') as&=a[i];
		ass=max(ass,as);
	}
	cout<<ass;
	return 0;
}
