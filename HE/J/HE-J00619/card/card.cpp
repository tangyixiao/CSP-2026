#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[500010];
bool f[100010];
long long ans[100010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int id=1;
	for(int t=1;t<=n;t++){
		for(int i=1;i<=n;i++) f[i]=false;
		for(int i=t;i<=n;i++){
			if(f[a[i]]==true){
				for(int j=i-1;j>=t;j--){
					if(a[j]==a[i]){
						break;
					}
					f[a[j]]=false;
				}
			}else{
				f[a[i]]=true;
			}
		}
		for(int i=1;i<=m;i++){
			if(f[i]){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}

