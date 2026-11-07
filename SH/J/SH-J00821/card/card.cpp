#include<bits/stdc++.h>
using namespace std;
const int N=500009;
const int M=300009;
int n,m;
int a[N],ans[M],sum[M];
bool cnt[M],alive[N]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.in","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m+1;j++){
		    cnt[j]=0;
	    }
	    for(int j=1;j<=n+1;j++){
	    	alive[j]=0;
	    	sum[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]&&!alive[j]){
				int k=j-1;
				while(a[k]!=a[j]||a[k]==a[j]&&alive[k]){
					if(alive[k]){
						k--;
						continue;
					}
					if(!alive[k]){
						alive[k]=true;
						cnt[a[k]]=0;
						k--;
					}			
				}
				alive[k]=1;
			}
			else if(!cnt[a[j]]&&!alive[j]) cnt[a[j]]=1;
		}
		for(int j=i;j<=n;j++)
		    if(!alive[j]) sum[a[j]]=1;
		for(int j=1;j<=m;j++) ans[j]+=sum[j];
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
