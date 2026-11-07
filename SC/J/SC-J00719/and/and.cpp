#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[200005],ans=-1,vist[200005];
void dfs(int step,int num,int u){
	if(num<=ans)return;
	if(step==m){
		ans=num;
		return;
	}
	for(int i=1;i<=n;i++){
		if(u==0)num=a[i];
		if(!vist[i]){
			vist[i]=1;
			num&=a[i];
			dfs(step+1,num,i);
			vist[i]=0;
		}
	}
	return;
}
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	dfs(0,0,0);
	cout<<ans;
	return 0;
}