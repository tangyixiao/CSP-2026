#include<bits/stdc++.h>
using namespace std;
const int M=5e5+5;
const int M1=3e5+5;
int ans[M1],a[M],w[M1];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		w[a[i]]=i;
	}
	for(int z=1;z<=n;z++){
		int wh=z;
		bool u=1;
		int kpi=-1;
		while(wh<n){
			if(u==1){
				if(wh==w[a[wh]]){
				kpi++;
				}else{
					kpi=max(kpi,0);
				u=0;
				}
			}
			ans[a[wh]]+=1+kpi;
			wh=w[a[wh]]+1;

		}
		if(kpi>0)
		z+=kpi;
	}
	for(int i=1;i<=m;i++){
		if(i==a[n]){
			cout<<n<<' ';
		}else
		cout<<ans[i]<<' ';
	}
}
