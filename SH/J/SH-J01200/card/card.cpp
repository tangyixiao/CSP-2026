#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MAXN=500010;
ll n,m;
ll card[MAXN];//卡牌顺序 
ll table[MAXN];//桌面 
ll cnt[MAXN];//出现次数 
ll first[MAXN]; //上次出现位置 
bool visited[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//输入 
	cin>>n>>m;
	for(ll i=0;i<n;i++){
		cin>>card[i];
	}
	//i:游戏次数 
	for(ll i=0;i<n;i++){
		//初始 
		for(ll j=0;j<m;j++){
			visited[j]=0;
			table[j]=0; 
			first[j]=-1;
		}
		//从i开始抽牌 
		for(ll j=i;j<n;j++){
			//如果出现过 
			if(visited[card[j]]==1){
				table[j]=card[j];
				//删除 
				for(ll k=first[card[j]];k<=table[j-1];k++){
					table[k]=0;
				}
				first[card[j]]=j;
			}
			else{
				visited[card[j]]=1;
				table[j]=card[j];
				first[card[j]]=j;
			}
		}
		for(ll j=i;j<n;j++){
			cnt[table[j]]++;
		}
	}
	for(ll i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
