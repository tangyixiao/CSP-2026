#include <bits/stdc++.h>
using namespace std;

int n,m;
stack<int> st;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	vector<int> a(n+5,0);
	vector<vector<long long>> sum(m+5,vector<long long>(n+5,0));
	for(int t=1;t<=n;t++){
		for(int i=t;i<=n;i++){
			if(t==1){
				cin>>a[i];
			}
			
			if(sum[a[i]][t]!=0){
				while(st.top()!=a[i]){
					sum[st.top()][t]--;
					st.pop();
					
				}
			}else{
				sum[a[i]][t]++;
				st.push(a[i]);
			}
			
		}
	}
	vector<int> ans(m+5,0);
	for(int i=1;i<=n;i++){
	
		for(int j=1;j<=m;j++){
			if(sum[j][i]!=0){
				ans[j]++;
			}
			
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}