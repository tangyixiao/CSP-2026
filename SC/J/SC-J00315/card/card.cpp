#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,m;
ll a[500001];
ll cnt[500001];
ll ans[500001];
vector<ll> cards;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	
	for(ll i = 1;i <= n;i ++){
		cin >> a[i];
	}
	for(ll i = 1;i <= n;i ++){
		cards.clear();
		memset(cnt,0,sizeof(cnt));
		for(ll j = i;j <= n;j ++){
			if(cnt[a[j]] == 0){
				cards.push_back(a[j]);
				cnt[a[j]] ++;
			}else{
				while(cards.back() != a[j]){
					cards.pop_back();
				}
			}
		}
		for(ll t = 0;t < cards.size();t ++){
			ans[cards[t]] ++;
		}
	}
	memset(cnt,0,sizeof(cnt));
	for(int i = 1;i <= n;i ++){
		if(cnt[a[i]] == 0){
			cout << ans[a[i]] << " ";
			cnt[a[i]] ++;
		}
	}
	
	return 0;
}