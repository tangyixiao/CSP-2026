#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue <int> card[300005];
int ans[300005],a[500005];
int n,m;
void push_up(int x){
	ll kind=a[x];
	ans[kind]++;
	x=card[kind].back();
	if(x!=n){
		push_up(x+1);
	}
}
int main(){
	ios::sync_nupuller(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i+=1){
		int x;
		scanf("%d",&x);
		if(x==a[i-1]){
			i--;
			n--;
		}
		else{
			card[a[i]].push(i);
		}
	}
	for(int i=1;i<=n;i++){
		if(i!=1){
			card[a[i-1]].pop();
		}
		push_up(i);
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
