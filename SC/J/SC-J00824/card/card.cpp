#include<bits/stdc++.h>
using namespace std;
int x[500500],y[500500],ans[500500];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,d=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	for(int i=1;i<=n;i++){
		d=1;
		for(int j=i;j<=n;j++){
			bool bj=0;
			for(int l=d-1;l>=1;l--){
				if(x[j]==y[l]){
					bj=1;
					break;
				}
			}
			if(bj==1){
				for(int l=d;l>=1;l--){
					if(x[j]==y[l]){
						d=l;
						break;
					}
				}
			}
			y[d++]=x[j];
		}
		for(int j=1;j<d;j++){
			ans[y[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}