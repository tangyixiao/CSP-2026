#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[900010],sum,z[900010],t[900010],ans[900010],f;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int q=1;q<=n;q++){
		f=1;
		memset(z,0,sizeof z);
		memset(t,0,sizeof t);
		for(int i=q;i<=n;i++){
			if(t[a[i]]){
				for(int j=1;j<=n;j++){
					if(z[j]>z[a[i]]){
						z[j]=0;
						t[j]=0;
					}
				}
				f=z[a[i]]+1;
			}else{
				z[a[i]]=f;
				f++;
				t[a[i]]=1;
			}
		}
		for(int i=1;i<=m;i++){
			if(z[i]!=0)ans[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}

