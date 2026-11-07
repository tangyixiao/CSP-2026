#include<bits/stdc++.h>
using namespace std;
#define int long long 
int f[500010];
int n,m,t[500010];
int b[300010],ans[300010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>t[i];
	for(int i=1;i<=m;i++)f[i]=i;
	for(int i=n;i>=1;i--){
		if(b[t[i]]==0){
			b[t[i]]=i;
			f[t[i]]=i;
		}else{
			f[t[i]]=b[t[i]];
		}
		for(int j=f[t[i]];j<=n;j++){
			j=f[t[j]];
			ans[t[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
} 
