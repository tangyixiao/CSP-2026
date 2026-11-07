#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	vector<int>A(n+1),ans(m+1);
	for(int i=1;i<=n;i++)cin>>A[i];
	for(int i=1;i<=n;i++){
		stack<int>st;
		vector<int>B(m+1,0);
		for(int j=i;j<=n;j++){
			if(B[A[j]]){
				while(st.top()!=A[j]){
					B[st.top()]--;
					st.pop();
				}
			}
			else{
				st.push(A[j]);
				B[A[j]]++;
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}