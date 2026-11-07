#include <bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
const int MAXM=3e5+5;
int n,m;
int a[MAXN],cnt[MAXM];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		bool tag[MAXM];
		memset(tag,0,sizeof(tag));
		stack<int> g;
		for(int j=i;j<=n;j++){
			if(!tag[a[j]]){
				g.push(a[j]);
				tag[a[j]]=true;
			}else{
				while(!g.empty()&&!(g.top()==a[j])){
					tag[g.top()]=false;
					g.pop();
				}
			}
		}
		while(!g.empty()){
			cnt[g.top()]++;
			g.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}