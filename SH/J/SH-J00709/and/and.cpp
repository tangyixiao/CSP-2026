#include<bits/stdc++.h>
#include<string>
using namespace std;
#define int long long
#define ull unsigned long long
#define pii pair<int,int>
#define popcnt __builtin_popcount
//#define ls (rt<<1)
//#define rs (rt<<1|1) 
const int N=2e5+5;
const int LOG=31;
unordered_map<int,multiset<int,greater<int> > >mp;
int a[N],n,m; 
unordered_map<int,bool>vis;
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int j=30;j>=0;j--){
		unordered_set<int>p;
		unordered_set<int>cant; 
		for(int i=1;i<=n;i++){
			int x=a[i];
			if(vis[x]){
				cant.insert(x);
				continue;
			}
			if((x>>j)&1){
				mp[j].insert(a[i]);
				p.insert(a[i]);
			}
		}
		vector<int>el;
		for(int x:mp[j]){
			if(popcnt(x)==1&&mp[j].size()+cant.size()<m){
				el.push_back(x);
			}
		}
		for(int x:el)mp[j].erase(x),p.erase(x);
		for(int i:p)vis[i]=1; 
	}
//	for(int j=30;j>=0;j--)sort(mp[j].begin(),mp[j].end(),greater<int>());
//	for(int j=30;j>=0;j--){
//		cout<<j<<":";
//		for(int x:mp[j])cout<<x<<" ";
//		cout<<endl;
//	}
	int ans=(1ll<<31)-1;
	for(int j=30;j>=0;j--){
	//	if(!((ans>>j)&1))break;
		int now=mp[j].size();
		if(now>m){
			int cnt=0;
			for(int i:mp[j]){
				if(cnt==m)break;
				cnt++;
				ans=ans&i;
			}
			break; 
		}
		for(int x:mp[j])ans=ans&x,m--;
		if(m==0)break;
	}
	cout<<ans<<endl;

} 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int T=1;
	//cin>>T;
	while(T--)solve();
	return 0;
}
