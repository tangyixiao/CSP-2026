#include<bits/stdc++.h>
using namespace std;
long long n,m,p,a[500050],ans[500050],w[500050];
bool f[500050];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	p=n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!f[a[j]]){
				f[a[j]]=1;
				w[a[j]]=j;
			}
			else{
				for(int k=w[a[j]];k<j;k++){
					f[a[k]]=0;
					w[a[j]]=0;
				}
				f[a[j]]=1;
			}
		}
		for(int j=i;j<=n;j++){
			if(f[a[j]]){
				ans[a[j]]++;
				f[a[j]]=0;
				w[a[j]]=0;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}