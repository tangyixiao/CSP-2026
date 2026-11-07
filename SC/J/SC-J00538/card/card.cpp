#include<bits/stdc++.h>
using namespace std;
	long long n,m;
	long long a[500005];
	long long vis[300005];
	long long cnt[300005];
	stack<long long> st;
void game(long long p){
	for(long long i=p;i<=n;i++){
		if(vis[a[i]]==0){
			vis[a[i]]=1;
			st.push(a[i]);
		}else{
			while(!st.empty()){
				long long xf=st.top();
				if(xf==a[i]){
					break;
				} 
				vis[xf]=0;
				st.pop();
			}
		}
	}
	for(long long i=1;i<=m;i++){
		cnt[i]+=vis[i];
	}
	memset(vis,0,sizeof(vis));
	while(!st.empty()){
		st.pop();
	}
}
int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		game(i);
	}
	for(long long i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
