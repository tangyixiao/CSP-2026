#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
ll a[500005];
ll res[300005];
ll pos[300005],st[500005],top=0;
void game(ll s){
	memset(pos,0,sizeof pos);
	top=0;
	for(ll i=s;i<=n;i++){
		if(pos[a[i]]){
			while(top&&st[top]!=a[i]){
				pos[st[top]]=0;
				top--;
			}
		}
		else{
			top++;
			st[top]=a[i];
			pos[a[i]]=top;
		}
	}
	for(ll i=1;i<=top;i++){
		res[st[i]]++;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(ll i=1;i<=n;i++)cin>>a[i];
	for(ll i=1;i<=n;i++){
		game(i);
	}
	for(ll i=1;i<=m;i++)cout<<res[i]<<' ';
	return 0;
}