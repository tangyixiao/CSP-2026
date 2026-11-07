#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10;
int a[N];
int cards[N];
int have_cards[N];
int ans[N];

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	for(int _=1;_<=n;_++){
		int r=0;
		for(int i=_;i<=n;i++){ // 当前打出的牌
			if(have_cards[a[i]]==0){
				have_cards[a[i]]=++r;
				cards[r]=a[i];
			}else{
				int idx=have_cards[a[i]];
				for(int i=idx;i<=r;i++){
					have_cards[cards[i]]=0;
				}
				r=idx-1;
			}
		}
		for(int i=1;i<=r;i++){
			ans[cards[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}