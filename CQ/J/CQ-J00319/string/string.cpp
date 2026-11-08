#include<bits/stdc++.h>
using namespace std;
#define int long long
const int RP=LLONG_MAX; 
#define fi first
#define se second
deque<pair<int,int>> s,t;
signed main(){
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,k=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,x;
		char c;
		cin>>a>>c;
		x=c-'a';
		s.push_back({x,a});
		t.push_back({x,a});
	}
	int ans=0;
	while(!s.empty()&&!t.empty()){
		auto ss=s.front();s.pop_front();
		auto tt=t.back();t.pop_back();
		if(ss.fi!=tt.fi) ans+=min(ss.se,tt.se);
		if(ss.se==tt.se) continue;
		else if(ss.se>tt.se) s.push_front({ss.fi,ss.se-tt.se});
		else t.push_back({tt.fi,tt.se-ss.se});
	}
	cout<<ans/2;
	return 0;
} 
