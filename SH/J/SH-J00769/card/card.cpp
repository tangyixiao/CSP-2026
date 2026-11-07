#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,top;
ll a[500005];
set<ll> s;//换成multiset稍微加快一丢丢速度 
ll sta[500005];
ll ans[500005];
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		top = 0;//栈清空 
		s.clear();//集合清空 
		for(int j=i;j<=n;++j){
			if(s.find(a[j])==s.end()){//看桌上是否无此牌 
				s.insert(a[j]);//放到桌上 
				sta[++top] = a[j];//加入栈 
			}			
			else{
				//桌上不会同时出现两个k 
				while(sta[top]!=a[j]){//清空k右边的牌 
					s.erase(sta[top]);
					--top;
				}
			}
		}
		for(int j=1;j<=m;++j){
			if(s.find(j)!=s.end())++ans[j];
		}
	}
	for(int i=1;i<=m;++i){
		cout<<ans[i]<<" ";
	}
	return 0;
}

