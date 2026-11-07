#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int MAXN=2e5+5;
int n;
deque<pair<ll,char>> q;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		ll num;
		char ch;
		cin>>num>>ch;
		q.push_back({num,ch});
	}
	
	ll res=0;
	while(!q.empty()&&q.size()!=1){
		ll len=min(q.front().first,q.back().first);
		if(q.front().second!=q.back().second){
			res+=len;
		}
		q.front().first-=len;
		q.back().first-=len;
		if(q.front().first==0) q.pop_front();
		if(q.back().first==0) q.pop_back();
	}
	cout<<res<<'\n';
	return 0;
}