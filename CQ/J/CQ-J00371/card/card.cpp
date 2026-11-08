#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int n,m,card[N];
int ans[N];
int nxt[N];//第i张牌下一张的位置 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	int last[m+6];
	memset(last,0,sizeof last); 
	for(int i=1;i<=n;i++){
		cin>>card[i];
		if(last[card[i]]!=0){
			nxt[last[card[i]]]=i;	
		}
		last[card[i]]=i;
	}
	for(int i=n;i>=1;i--){
		int now=i;
		while(now<=n){	
			while(nxt[now]!=0)now=nxt[now];
			ans[card[now]]++;
			
			now++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
} 
