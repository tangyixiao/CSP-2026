#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[500005],f[500005],maxans,mina,maxa;
void dfs(int x,int y,long long ans)
{
	if(y==m){
		maxans=max(maxans,ans);
		return;
	}
	if(x==n+1) return;
	if(ans==0){
	dfs(x+1,y+1,a[x]);
	}
	else{
		ans&=a[x];
	dfs(x+1,y+1,ans);
	}
	dfs(x+1,y,ans);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i];
		maxa=max(maxa,a[i]);
		mina=min(mina,a[i]);
	}
	if(m==1){
		cout<<maxa;
		return 0;
	}
	if(m==n){
		maxans=a[1];
		for(int i=2;i<=n;i++){
			maxans&=a[i];
		}
		cout<<maxans;
		return 0;
	}
	if(m==n){
		bool flag=0;
		if(a[1]==mina){
			flag=1;
			maxans=a[2];
		}
		else{
		maxans=a[1];}
		for(int i=flag+2;i<=n;i++){
			if(a[i]==mina&&!flag){
				flag=1;
			}
			else{
			maxans&=a[i];
			}
		}
		cout<<maxans;
		return 0;
	}
	dfs(1,0,0);
	cout<<maxans;
	return 0;
}
