#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N];

int last[M],ans[M];
void bf1(){
	int ok=0,i=n;
	while(ok<m){
		if(last[a[i]]==0){
			last[a[i]]=i;
			ok++;
		}
		i--;
	}
	for(int k=1;k<=n;k++){
		int p=k;
		while(1){
			ans[a[p]]++;
			p=last[a[p]]+1;
			if(p>n) break;
		}
	}
	for(int i=1;i<=m;i++) printf("%d%c",ans[i],i<m?32:10);
}

struct Jump {
	int p,x;
	bool operator<(const Jump &b)const {
		return p>b.p;
	}
};
void magic_bf(){
	int ok=0,i=n;
	while(ok<m){
		if(last[a[i]]==0){
			last[a[i]]=i;
			ok++;
		}
		i--;
	}
	priority_queue<Jump> pq;
	for(int k=1;k<=n;k++){
		pq.push((Jump){k,1});
//printf("Push {%lld, %lld}\n",k,1);
	}
//printf("------------------------\n");
	while(!pq.empty()){
		Jump j=pq.top();
		pq.pop();
//printf("Pop {%lld, %lld}\n",j.p,j.x);
		int p0=j.p,x0=j.x;
		while(1){
			if(pq.empty()) break;
			j=pq.top();
			if(j.p!=p0) break;
			pq.pop();
//printf("Pop {%lld, %lld}\n",j.p,j.x);
			x0+=j.x;
		}
		ans[a[p0]]+=x0;
		p0=last[a[p0]]+1;
		if(p0>n) continue;
		pq.push((Jump){p0,x0});
//printf("Push {%lld, %lld}\n",p0,x0);
	}
	for(int i=1;i<=m;i++) printf("%d%c",ans[i],i<m?32:10);
}

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n*m<=1e7) bf1(); else
	magic_bf();
	return 0;
}

