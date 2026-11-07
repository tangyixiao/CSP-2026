#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll cards[500010],st[300010],ft[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>cards[i];
	}
	for(ll i=1;i<=n;i++){
		stack<ll>a;
		memset(st,0,sizeof(st));
		for(ll j=i;j<=n;j++){
			if(a.size() && st[cards[j]]>=1){
				for(ll k;;k++){
					if(a.top()==st[cards[j]]){
						break;
					}
					a.pop();
				}
				st[cards[j]]=1;
			}
			else{
				a.push(cards[j]);
				st[cards[j]]++;
			}
		}
		while(a.size()){
			ft[a.top()]++;
			a.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ft[i]<<' ';
	}
	return 0;
}
