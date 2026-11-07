#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ai[200005],d[200005],id[200005],ans[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans[i]=0;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			ai[i]=a[i];
		}
		for(int i=1;i<=m;i++){
			d[i]=0;
			id[i]=0;
		}
		
		for(int i=k;i<=n;i++){
			d[ai[i]]++;
								if(d[ai[i]]==2){
									for(int j=id[ai[i]];j<i;j++){
										d[ai[j]]-=1;
										ai[j]=0;
										
									}
									
									
								}
			id[ai[i]]=i;
		}
		for(int i=k;i<=n;i++){
			if(ai[i]>0){
				ans[ai[i]]++;
			}
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
