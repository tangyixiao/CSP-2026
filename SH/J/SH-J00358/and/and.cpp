#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int T=31;
int n,m;
int a[N];
set<int>s[37];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=(1<<25)) mx=1;
	}
	if(!mx) T=22;
	for(int i=1;i<=n;i++){
		for(int j=T;j>=0;j--){
			if((1<<j)&a[i]){
				s[j].insert(i);
			}
		}
	}
	set<int>p;
	bool flag=0;
	for(int j=T;j>=0;j--){
		if(s[j].size()<m) continue;
		if(!flag){
			p=s[j];
			flag=1;
		}
		else{
			set<int>q,t;
			q=s[j];
			for(auto u:q){
				if(p.count(u)&&q.count(u)){
					t.insert(u);
				}
			}
			
			if(t.size()>=m) p=t;
		}
	}
	int ans=(1ll<<31)-1;
	for(auto u:p){
		ans&=a[u];
	}
	cout<<ans<<'\n';
	return 0;
}

