#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+7;
int N,M;
int cnt;
bool vis[MAXN];
bool lead=true;
vector <int> tmp;
vector <int> res;
void solve(){
	cin>>N>>M;
	for(int i=1,x;i<=N;i++)cin>>x,tmp.push_back(x);
	for(int bit=30;bit>=0;bit--){
		for(int val:tmp)if((val>>bit)&1)res.push_back(val);
//		for(int val:res)cout<<val<<" ";
//		cout<<'\n';
		lead=(lead&(res.size()==0));
		if(lead)res.clear();
		else if((int)res.size()>=M){
			vis[bit]=true;
			tmp.clear();
			for(int val:res)tmp.push_back(val);
			res.clear();
		}
		else if((int)res.size()<M)res.clear();
	}
	int ans=0;
	for(int i=30;i>=0;i--){ 
		if(vis[i])ans=ans*2+1;
		else 	  ans=ans*2;
	}
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