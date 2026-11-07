#include<bits/stdc++.h>
using namespace std;
int n,m;
int ans[500010];
int a[500010];
int s[500010];
int u[300010];
int x[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			s[j]=0;
		}
		int top=0;
		for(int j=i;j<=n;j++){
			if(s[a[j]]){
				top=s[a[j]];
			}else{
				x[++top]=a[j];
			}
			s[a[j]]=top;
		}
		for(int j=1;j<=top;j++){
			u[x[j]]=1;
		}
		for(int j=1;j<=m;j++){
			if(u[j]){
				ans[j]++;
//				cout<<i<<' '<<j<<'\n';
			}
			u[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}