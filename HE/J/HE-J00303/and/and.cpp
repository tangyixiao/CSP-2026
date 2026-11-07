#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
int p[N],cnt;
int ans;
void dfs(int pos,int k){
	if(k>m){
		cnt=p[1];
		for(int i=2;i<=m;i++){
			cnt&=p[i];
		}
		ans=max(ans,cnt);
		return ;
	}
	for(int i=pos;i<=n;i++){
		p[k]=a[i];
		dfs(i+1,k+1);
	}
}
bool cmp(int u,int v){
	return u>v;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int Max=INT_MIN;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int k=a[i];
		while(k&&flag){
			if(k%2==0) flag=0;
			k/=2;
			break;
		}
	}
	if(flag){
		sort(a+1,a+n+1,cmp);
		int ansA=a[1];
		for(int i=2;i<=m;i++) ansA&=a[i];
		cout<<ansA;
		return 0;
	}
	dfs(1,1);
	cout<<ans;
	return 0;
}
