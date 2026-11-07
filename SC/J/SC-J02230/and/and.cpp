#include<bits/stdc++.h>
using namespace std;
const int maxn=200000+10;
int n,m,ans=0,a[maxn];
bool vis[maxn];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]),vis[i]=true;
	for(int i=29;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++) if(vis[j] && (a[j]&(1<<i))) cnt++;
		if(cnt>=m){
			ans|=(1<<i);
			for(int j=1;j<=n;j++) if(vis[j] && !(a[j]&(1<<i))) vis[j]=false;
		}
	}
	printf("%d\n",ans);
	return 0;
}