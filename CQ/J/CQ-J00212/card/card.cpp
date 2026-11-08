#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 5e5 + 86;
ll n,m,a[N],cnt[N],ans[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++) cin>>a[i];
	for(int i = 1;i <= n;i++){
		stack<ll> s;
		memset(cnt,0,sizeof cnt);
		for(int j = i;j <= n;j++){
			if(cnt[a[j]] == 0) s.push(a[j]),cnt[a[j]]++;
			else{
				while(s.top() != a[j]){
					cnt[s.top()]--;
					s.pop();
				}
			}
		}
		for(int j = 1;j <= m;j++) if(cnt[j]) ans[j]++;
	}
	for(int i = 1;i <= m;i++) cout<<ans[i]<<' ';
	return 0;
}
