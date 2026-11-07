#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N=2e5+5;
ll a[N],n,m,ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int p=1;
	while(p<=n){
		queue<ll> b;
		bool use [N];
		for(int i=p;i<=n;i++){
			if(use[a[i]]==0){
				b.push(a[i]);
				use[a[i]]=1;
			}
			else{
				while(b.front()!=a[i]){
					b.pop();
				}
			}
		}
		while(b.size()>0){
			ans[b.front()]++;
			b.pop();
		}
		p++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
} 