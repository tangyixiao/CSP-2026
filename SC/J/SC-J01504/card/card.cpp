#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010],b[3010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		bool f[m+10];
		for(int j=1;j<=m;j++)f[j]=0;
		for(int j=i;j<=n;j++){
			f[a[j]]=!f[a[j]];
			if(f[a[j]]==0){
				int x;
				for(int k=i;k<=j;k++){
					if(a[k]==a[j])x=k;
					break;
				}
				for(int k=x;k<=j;k++)f[a[k]]=0;
				f[a[j]]=1;
			}
		}
		for(int j=1;j<=m;j++){
			if(f[j]==1){
				b[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
	return 0;
}