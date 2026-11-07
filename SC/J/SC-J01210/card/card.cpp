#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
const int N=5e5+5,mod=998244353,inf=1<<30;

int n,m,tot,a[N];
int last[N];
pair<int,int> f[N];
ll tag[N],pre[N],ans[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		tag[i]=1; 
	}
	for(int i=1;i<=n;i++){
		if(last[a[i]]){
			f[++tot]={last[a[i]],i};
			last[a[i]]=i;
		} else{
			last[a[i]]=i;
		}
	}
	sort(f+1,f+tot+1);
	for(int i=1;i<=n;i++){
		int l=0,r=tot+1;
		while(l+1<r){
			int mid=(l+r)/2;
			if(f[mid].first>=i){
				r=mid;
			} else{
				l=mid;
			}
		}
		if(r<=tot){
			int val=a[f[r].first];
			pre[i]+=tag[i];
			pre[f[r].first]-=tag[i];
			tag[last[val]]+=tag[i];
		} else{
			pre[i]+=tag[i];
			pre[n+1]-=tag[i];
		}
	}
	for(int i=1;i<=n;i++){
		pre[i]+=pre[i-1];
	}	
	for(int i=1;i<=n;i++){
		ans[a[i]]+=pre[i];
	}
	for(int i=1;i<=m;i++){
		printf("%lld ",ans[i]);
	}
	return 0;
}