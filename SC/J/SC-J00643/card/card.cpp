#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],cnt[M];
long long x=1;
bool vis[M]={0};
void solve(int x){
	memset(vis,0,sizeof vis);
	stack<int> st;
	for(int i=x;i<=n;i++){
		if(vis[a[i]]){
			while(st.top()!=a[i]){
				vis[st.top()]=0;
				st.pop();
			}
		}
		else{
			st.push(a[i]);
			vis[a[i]]=1;
		}
	}
	while(!st.empty()){
		cnt[st.top()]++;
		st.pop();
	}
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		solve(i);
	}
	cout<<cnt[1];
	for(int i=2;i<=m;i++) cout<<" "<<cnt[i];
	return 0;
} 

