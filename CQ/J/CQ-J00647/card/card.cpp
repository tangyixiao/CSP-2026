#include<bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 40;
int n,m,a[maxn],ans[maxn],cnt[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<=n;++i){
		stack<int> st;
		for(int j=1;j<=m;++j) cnt[j]=0;
		for(int j=i;j<=n;++j){
			if(cnt[a[j]]==0){
				cnt[a[j]]++;
				st.push(a[j]);
			}else{
				cnt[a[j]]=1;
				while(!st.empty()&&st.top()!=a[j]){
					cnt[st.top()]--;		
					st.pop();
				}
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();
		}
	} 
	for(int i=1;i<=m;++i) cout<<ans[i]<<' ';
} 

