#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;
deque<pair<int,char> > q;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		q.push_back({a,c});
	}
	int ans=0;
	while(q.size()>1){
		int x=q.front().first;
		int y=q.back().first;
		char a=q.front().second;
		char b=q.back().second;
		int m=min(x,y);
		if(a!=b) ans+=m;
		q.pop_front();
		q.pop_back();
		m=abs(x-y);
		if(m){
			if(x>y) q.push_front({m,a});
			else q.push_back({m,b});
		} 
	}
	cout<<ans;
}
