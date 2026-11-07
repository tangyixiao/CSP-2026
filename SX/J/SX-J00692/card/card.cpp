#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int b[500005];
long long c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool F=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(F && a[i]<a[i-1]) F=false;
	}
	if(F){
		for(int i=1;i<=n;i++){
			c[a[i]]++;
		}
		for(int i=1;i<=m;i++){
			c[i]+=c[i-1];
			cout<<c[i]<<' ';
		}
	}else{
		for(int t=1;t<=n;t++){
			memset(b,0,sizeof(b));
			int k=0;
			for(int i=t;i<=n;i++){
				bool f=true;
				for(int j=1;j<=k;j++){
					if(b[j]==a[i]){
						f=false;
						k=j;
						break;
					}
				}
				if(k==0 || f) b[++k]=a[i];
			}
			for(int i=1;i<=m;i++){
				for(int j=1;j<=k;j++){
					if(b[j]==i){
						c[i]++;
						break;
					}
				}
			}
		}
		for(int i=1;i<=m;i++){
			cout<<c[i]<<' ';
		}
	}
	return 0;
}