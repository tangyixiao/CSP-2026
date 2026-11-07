#include<bits/stdc++.h>
using namespace std;
int ans[300010],a[500010],n,m,t[3010],b[5010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(t,0,sizeof t);
		memset(b,0,sizeof b);
		int l=0;
		for(int j=i;j<=n;j++){
			if(!t[a[j]]){
				t[a[j]]=1;
				b[++l]=a[j];
			} 
			else{
				while(b[l]!=a[j]){
					t[b[l]]=0;
					l--;
				}
			}
		}
		for(int j=1;j<=l;j++){
			ans[b[j]]++;
		} 
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
