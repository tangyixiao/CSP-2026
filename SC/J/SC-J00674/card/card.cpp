#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],z,ans[500005];
int c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		bool b[300005]={0};
		z=0;
		for(int j=i;j<=n;j++){

			if(b[a[j]]==false){
				b[a[j]]=true;
				z++;
				c[z]=a[j];
				ans[a[j]]++;
			}else{
				while(c[z]!=a[j]){
					ans[c[z]]--;
					b[c[z]]=false;
					c[z]=0;
					z--;
				}
				b[c[z]]=true;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}