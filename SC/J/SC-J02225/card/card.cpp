#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int>a(n+2);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	vector<int>cnt(n+2,0);
	for(int i=1;i<=n;i++){
		vector<int>b=a;
		vector<bool>vis(n+2,0);
		stack<int>st;
		for(int j=i;j<=n;j++){
			if(vis[b[j]]==1){
				while(st.top()!=b[j]){
					st.pop();
				}
				st.pop();
			}
			st.push(b[j]);
			vis[b[j]]=1;
		}
		while(st.size()){
			cnt[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}