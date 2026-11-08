#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],f[300005],ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=5000){
		for(int i=1;i<=n;i++){
			memset(f,0,sizeof(f));
			for(int j=i;j<=n;j++){
				if(f[a[j]]==1)memset(f,0,sizeof(f));
				f[a[j]]=1;
			}
			for(int i=1;i<=m;i++)if(f[i]==1)ans[i]++;
		}
		for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	}
	else{
		for(int i=n;i>=1;i--){
			if(f[i]==0)ans[i]=n,f[i]=1;
			else break;
		}
		for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	}
    return 0;
}

