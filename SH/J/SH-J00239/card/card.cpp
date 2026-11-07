#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[500005];
int x[500005];
void check(){
	for(int i=1;i<=m;i++){
		if(a[i]>0) ans[i]++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(ans,0,sizeof ans);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	int cnt=0;
	while(cnt<=n){
		cnt++;
		memset(a,0,sizeof a);
		for(int i=cnt;i<=n;i++){
			int xx=x[i];
			if(a[xx]==0) a[xx]=i;
			else{
				for(int j=1;j<=m;j++){
					if(a[j]>a[xx]){
						a[j]=0;
					}
				}
				a[xx]=i;
			}
		}
		check();
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
