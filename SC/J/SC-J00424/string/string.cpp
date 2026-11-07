#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	deque<pair<int,char>>qe;
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		qe.push_back({a,c});
	}
	while(!qe.empty()){
		if(qe.size()==1){
			break;
		}
		if(qe.front().second!=qe.back().second){
			ans+=min(qe.front().first,qe.back().first);
		}
		if(qe.front().first<qe.back().first){
			int a=qe.back().first-qe.front().first;
			char c=qe.back().second;
			qe.pop_front();
			qe.pop_back();
			qe.push_back({a,c});
		}else if(qe.front().first==qe.back().first){
			qe.pop_front();
			qe.pop_back();
		}else if(qe.front().first>qe.back().first){
			int a=qe.front().first-qe.back().first;
			char c=qe.front().second;
			qe.pop_front();
			qe.pop_back();
			qe.push_front({a,c});
		}
	}
	cout<<ans;
	return 0;
}