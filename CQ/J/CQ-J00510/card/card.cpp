#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<unsigned short>a;
vector<unsigned short>p;
vector<vector<bool> >ans;
vector<vector<bool> >wass;
vector<unsigned short>sum;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//反，牌数从0~n,每次相当于在上一次基础上+1，但如果有相同，则找曾经算过的再+1
	cin>>n>>m;
	a.resize(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ans.resize(n+1);
	wass.resize(n+1);
	p.resize(m+1);
	sum.resize(m+1);
	ans[0].resize(m+1);
	wass[0].resize(m+1);
	for(int i=1;i<=n;i++){
		ans[i].resize(m+1);
		wass[i].resize(m+1);
		if(wass[i-1][a[n-i]]==1){
			for(int j=1;j<=m;j++){
				wass[i][j]=wass[i-1][j];
				ans[i][j]=ans[p[a[n-i]]+1][j];
				if(ans[i][j]==0&&wass[i][j]==0){
					p[j]=i;
				}
			}
		}else{
			ans[i][a[n-i]]=1;
			wass[i][a[n-i]]=1;
			for(int j=1;j<=m;j++){
				if(j==a[n-i])continue;
				ans[i][j]=ans[i-1][j];
				wass[i][j]=wass[i-1][j];
				if(ans[i][j]==0&&wass[i][j]==0){
					p[j]=i;
				}
			}
		}
		for(int j=1;j<=m;j++){
			if(ans[i][j]==1){
				sum[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}
