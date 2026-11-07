#include<bits/stdc++.h>
using namespace std;
long long n,m,it=0;
bool trickortreat=true;
long long cards[500005],desktop[500005];
map<long long,long long> ans;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>cards[i];
		if(cards[i]<cards[i-1])trickortreat=false;
	}
	if(n<=750){
		for(long long i=1;i<=n;i++){
			it=0;
			for(long long j=i;j<=n;j++){
				for(long long k=1;k<=it;k++){
					if(desktop[k]==cards[j]){
						it=k-1;
						break;
					}
				}
				desktop[++it]=cards[j];
			}
			for(long long j=1;j<=it;j++){
				ans[desktop[j]]++;
			}
		}
		for(long long i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}else{
		if(trickortreat==true){
			for(long long i=1;i<=n;i++){
				ans[cards[i]]++;
				if(cards[i-1]!=cards[i]&&i!=1){
					ans[cards[i]]+=ans[cards[i-1]];
				}
			}
			for(long long i=1;i<=m;i++){
				cout<<ans[i]<<" ";
			}
		}
	}
	return 0;
}