#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[500005],b[500005];
long long cnt[300005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]==a[j]){
				b[i]=j;
				break;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[j]==0){
				cnt[a[j]]++;
			}
			else j=b[j]-1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0 ;
}
//kan wo chao ji da bao li!!!!!!!!!!
//ru guo wo ru xuan le qing at wo(luogu:jianzongX(1441888))
//niu lai! 
//    __  _               _             __
//   / / | |          ___| |___        !  !
//  / /__| |____     |___   ___|       !  !
// /_____   ____|   __\_\| |/_/__      !  !
//  _____| |_____  |_____   _____|     !  ! 
// |_____   _____|    / /| |\ \         \/
//       | |         / / | | \ \       /  \
//       |_|        /_/  |_|  \_\      \__/




