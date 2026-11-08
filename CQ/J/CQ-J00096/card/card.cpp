#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[500005];
int f[300005];
int s[300005],r;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)f[j]=0;
		r=0;
		for(int j=i;j<=n;j++){
			int x=a[j];
			if(f[x]==0){
				s[++r]=x;
				f[x]=r;
			}else{
				for(int k=r;k>f[x];k--){
					f[s[r]]=0;
					r--;
				}
			}
		}
		for(int j=1;j<=r;j++)ans[s[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
