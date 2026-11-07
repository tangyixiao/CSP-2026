#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+100,M=3e5+100;
int n,m;
int a[N];
bool vis[M];
int ans[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		stack<int> q;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				while(1){
					int k=q.top();
					if(k==a[j]) break;
					else{
						q.pop();
						vis[k]=0;
					}
				}
			}else{
				vis[a[j]]=1;
				q.push(a[j]);
			}
		}
		while(!q.empty()){
			int k=q.top();
//			cout<<k<<" ";
			ans[k]++;
			q.pop();
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++) printf("%lld ",ans[i]);
	return 0;
}
