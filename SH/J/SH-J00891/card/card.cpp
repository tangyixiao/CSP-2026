#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=5e5+10,M=3e5+10;
ll n,m,a[N],cnt[M],tmp[M];
vector<ll> dsk;//dsk=桌面上的牌（从左到右） 
bool Find(ll x) { //桌面上有没有点数为x的牌 
	for (ll k=0;k<dsk.size();k++) {
		if (dsk[k]==x) return 1;
	}
	return 0;
}
void clean(ll x) {
	ll fst=0;
	for (ll k=0;k<dsk.size();k++) {
		if (dsk[k]==x) {fst=k;break;}
	}
	for (ll k=fst;k<dsk.size();k++) {
		dsk.pop_back();
	}
} 
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for (ll i=1;i<=n;i++) cin>>a[i];
	for (ll i=1;i<=n;i++) { //当前第i局游戏 
		dsk.clear();
		for (ll j=i;j<=n;j++) { //依次打出第i到n张牌 
			if (!Find(a[j])) { //没有点数为a[j]的牌 
				dsk.push_back(a[j]);
			}
			else { //有点数为a[j]的牌 
				clean(a[j]);//收走桌上点数为a[j]的牌及其右边所有牌 
				dsk.push_back(a[j]);
			}
		}
		for (ll j=1;j<=m;j++) tmp[j]=0;
		for (ll j=0;j<dsk.size();j++) {
			//cout<<dsk[j]<<" ";
			tmp[dsk[j]]=1;
		}
		for (ll j=1;j<=m;j++) cnt[j]+=tmp[j];
		//cout<<'\n';
	}
	for (ll i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}

