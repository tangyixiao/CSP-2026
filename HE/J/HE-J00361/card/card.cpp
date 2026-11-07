#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N];
int ans[300005];
stack<int>st;
struct node{
	bool f;
	int dir;
}id[300005];//下标是当前花色
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int t=1;t<=n;t++){
		for(int i=t;i<=n;i++){
			//判断 
			if(st.size()){
				if(id[a[i]].f){
					for(int j=id[i].dir;j<=st.size();j++){
						id[st.top()].f=false;
						st.pop();
					}
				}
			}
			//出牌 
			st.push(a[i]);
			id[a[i]].dir=st.size();
			id[a[i]].f=true;
		}
		//计数 
		for(int i=1;i<=m;i++){
			if(id[i].f){
				ans[i]++;
				id[i].f=false;
			}
		}
		//清空 
		while(st.size()){
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
