#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N=1e8+10;
LL n,m;
LL q[N];
LL a[N];
bool st[N];
LL ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout)
	cin>>n>>m;
	for(LL i=0;i<n;i++){
		cin>>q[i];
	}
	for(LL i=0;i<n;i++){
		for(LL t=1;t<=m;t++){
			st[t]=false;
		}
		LL al=0;
		for(LL j=i;j<n;j++){
			if(st[q[j]]){
				while(a[al]!=q[j]){
					a[al]=0;
					al--;
				}
			}else{
				a[al]=q[j];
				al++;
				st[q[j]]=true;
			}
			while(al){
				ans[a[al]]++;
				a[al]=0;
				al--;
			}
		}
	}
	
	for(LL i=1;i<=m;i++){
		if(ans[i]!=0){
			cout<<ans[i]<<" ";
		}
	}
	return 0;
}
