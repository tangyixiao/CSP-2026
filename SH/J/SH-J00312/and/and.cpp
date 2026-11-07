#include <bits/stdc++.h>
using namespace std;

const int N=2e5+10;

int n,m,c,now,ans,cnt[35];
bool a[N][35];

vector<int> q;
vector<int> p;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&c);
		int tot=0;
		while(c){
			a[i][tot]=c&1;
			if(a[i][tot]) ++cnt[tot];
			c>>=1; ++tot;
		}
		q.push_back(i);
	}
	now=30;
	while(true){
		bool flag=0;
		for(int i=now-1;i>=0;--i){
			if(cnt[i]>=m){
				now=i; flag=1;
				ans+=1<<i;
				break;
			}
		}
		if(!flag) break;
		p.clear();
		for(int i=0;i<int(q.size());++i){
			int v=q[i];
			if(a[v][now])
				p.push_back(v);
		}
		q.clear();
		for(int i=0;i<=30;++i) cnt[i]=0;
		for(int i=0;i<int(p.size());++i){
			q.push_back(p[i]);
			for(int j=0;j<=30;++j)
				cnt[j]+=a[p[i]][j];
		}
	}
	printf("%d",ans);
}
