#include<bits/stdc++.h>
using namespace std;
int a[500007],b[300007];
int n,m;
void solve(int x) {
	queue<int>q;
	for(int i=1;i<=n;i++)
		q.push(a[i]);
	for(int i=1;i<x;i++){
		if(x==1)
			break;
		q.pop();
	}
	deque<int>gm;
	while(!q.empty()){
		for(auto ed:gm)
			if(ed==q.front())
				while(gm.back()!=q.front())
					gm.pop_back();
		gm.push_back(q.front());
		q.pop();
	}
	for(auto i:gm)
		b[i]++;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		solve(i);
	for(int i=1;i<=m;i++)
		cout<<b[i]<<' ';
}
