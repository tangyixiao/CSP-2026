#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=5e5+10;
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	map<int,int>ans;
	for(int i=1;i<=n;i++){
		map<int,int>mp;
		stack<int>st;
		for(int j=i;j<=n;j++){
			if(mp[a[j]]==0){
				st.push(a[j]);
				mp[a[j]]=1;
			}
			else{
				while(!st.empty() and st.top()!=a[j]){
					st.pop();
				}
			}
		}
		while(!st.empty()){
			int t=st.top();
			ans[t]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
