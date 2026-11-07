#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	if(1==2){
		ll rp=0;
		while(1){
			rp++;
		}
	}
	ll n,m;
	cin>>n>>m;
	vl a(n+1);
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	vl ans(m+1);
	for(ll i=1;i<=n;i++){//第i局
		vector<array<ll,2>> t(m+1);//0：出现次数,1:下标;
		vl tabel;
		for(ll j=i;j<=n;j++){//第j张牌
			if(t[a[j]][0]==0){
				tabel.push_back(a[j]);
				t[a[j]][0]++;
				t[a[j]][1]=tabel.size()-1;
			}else{
				while((t[a[j]][1]+1)!=(ll)(tabel.size())){
					tabel.pop_back();
				}
			}
		}
		for(auto &x:tabel){
			ans[x]++;
		}
	}
	for(ll i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}
//啥子题目啊，暴力