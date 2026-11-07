#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int v[300005];
		for(int j=i;j<=n;j++){
			if(v[a[j]]==1){
				for(int k=i;k<=n;k++){
					if(a[k]==a[j]){
						for(int h=k;h<j;h++) v[a[h]]=0;
						break;
					}
				}
			}else{
				v[a[j]]++;
			}
		}
		for(int j=1;j<=m;j++){
			if(v[j]==1) ans[j]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}