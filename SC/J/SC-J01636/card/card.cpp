#include<bits/stdc++.h>
#define int long long
using namespace std;

//大模拟O(n^2)，60分+5分
const int N=5e5+10,M=3e5+10;
int n,m,a[N],cnt,b[N];
bool vis[N];//是否在队列中
int num[N],ans[M];

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	scanf("%lld%lld",&n,&m);
	int temp;
	for(int i=1;i<=n;i++){
		scanf("%lld",&temp);
		if(temp!=a[cnt]) a[++cnt]=temp;
		num[cnt]++;
	}
	
	//特殊性质A
	if(cnt>=5100){
		for(int i=1;i<=cnt;i++) num[i]+=num[i-1];
		for(int i=1;i<=cnt;i++) printf("%lld ",num[i]);
		puts("");
		return 0;
	}
	
	//第i局
	for(int i=1;i<=cnt;i++){
		int l=1,r=1;//模拟双端队列
		memset(vis,false,sizeof(vis));
		b[l]=i,vis[a[i]]=true;
		for(int j=i+1;j<=cnt;j++){
			if(vis[a[j]]){
				while(a[b[r]]!=a[j]){
					vis[a[b[r]]]=false;
					r--;
				}
			}else b[++r]=j,vis[a[j]]=true;
		}
		for(int j=l;j<=r;j++) ans[a[b[j]]]+=num[i];
	}
	for(int i=1;i<=m;i++) printf("%lld ",ans[i]);
	puts("");
	return 0;
}