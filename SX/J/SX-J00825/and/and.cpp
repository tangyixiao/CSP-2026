#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
int ans=INT_MIN;
bool check(int x){
	x++;
	while(x/2!=0){
		if(x%2!=0) return false;
		x/=2;
	}
	return true;
}
void dfs(int x,int d,int cnt){
	if(cnt==m){
		ans=max(ans,d);
		return;
	}
	if(x==n+1) return;
	if(d==0&&cnt==0){
		dfs(x+1,d,cnt);
		dfs(x+1,a[x],cnt+1);
	}else{
		dfs(x+1,d,cnt);
		dfs(x+1,a[x]&d,cnt+1);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	scanf("%d%d",&n,&m);
	bool isB=false;
	if(check(n-1)) isB==true;
	bool isA=true;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(!check(a[i])) isA=false;
	}
	if(isA){
		cout<<1;
		sort(a+1,a+n+1,greater<int>());
		ans=a[1];
		for(int i=2;i<=m;i++){
			ans&=a[i];
		}
		printf("%d",ans);
		return 0;
	}
	dfs(2,0,0);
	dfs(2,a[1],1);
	printf("%d",ans);
	return 0;
}
