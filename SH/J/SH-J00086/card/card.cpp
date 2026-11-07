#include<bits/stdc++.h>
#define endl '\n'
typedef long long ll;
typedef double db;
using namespace std;
const int N=5e5+9,INF=0x3f3f3f3f;
int n,m,a[N],c[N]; bool ok[N];
deque<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int r=1;r<=n;r++){
		q.clear();
		memset(ok,0,sizeof(ok));
		for(int i=r;i<=n;i++){
			if(!ok[a[i]]){
				ok[a[i]]=1;
				q.push_back(a[i]);
			}
			else{
				while(q.back()!=a[i]){
					ok[q.back()]=0;
					q.pop_back();
				}
			}
		}
		for(int i=1;i<=m;i++) c[i]+=ok[i];
	}
	for(int i=1;i<=m;i++) cout<<c[i]<<" ";
	return 0;
}
//sto xiaoZ orz

////Great Reward of Confusing Behaviors
///everyday-fishing:
//freopen("card.in","w",stdin);
//froepen("card.out","r",stdout);
//forepen("card.in","r",stdout);
//freepen("card.out","w",stdin);
///about-me:
//florren("luogu.com.cn","/user/1074528",student);
