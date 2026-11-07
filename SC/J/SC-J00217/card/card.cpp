#include <bits/stdc++.h>
using namespace std;
const int MAXN=5e5+7;
bool vis[MAXN];
int a[MAXN];
int sta[MAXN];
int ans[MAXN];
int N,M,top;
void deal(int st){
	for(int i=st;i<=N;i++){
		if(!vis[a[i]]){
			vis[a[i]]=true;
			sta[++top]=a[i];
		}else{
			while(sta[top]!=a[i]){
				vis[sta[top]]=false;
				top--;
			}
		}
	}
	while(top){
		ans[sta[top]]++;
		vis[sta[top]]=false;
		top--;
	}
}
void solve(){
	cin>>N>>M;
	for(int i=1;i<=N;i++)cin>>a[i];
	for(int i=1;i<=N;i++)deal(i);
	for(int i=1;i<=M;i++)cout<<ans[i]<<' ';
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
/*
4 3
1 2 1 3
*/