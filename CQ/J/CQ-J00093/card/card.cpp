#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;

int n,m;
int a[N],b[N],c[N];
int ans[N],v[N],u[N],f[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		u[a[i]]++;
	}
	
	for (int i=n;i>=1;i--){
		if(c[a[i]]==0){
			c[a[i]]=i;
			b[i]=i+1;
		}
		else{
			b[i]=c[a[i]];
		}
	}
	for (int i=1;i<=n;i++){
		int j=i;
		if(f[a[i]]){
			continue;
		}
		f[a[i]]=1;
		while(j<=n){
			if(v[a[j]]!=i)
				ans[a[j]]+=u[a[i]];
				v[a[j]]=i;
			j=b[j];
		}
	}
	for (int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
