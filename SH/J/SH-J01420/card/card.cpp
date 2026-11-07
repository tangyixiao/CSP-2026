#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],ans[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		vector<bool>used(m+1,false);
		stack<int>st;
		for(int j=i;j<=n;j++){
			if(used[a[j]]==false){
				while(!st.empty()){
					if(st.top()==a[j]){
						st.pop();
						break;
					}
					st.pop();
				}
			}
			st.push(a[j]);
			used[a[j]]=true;
		}
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
