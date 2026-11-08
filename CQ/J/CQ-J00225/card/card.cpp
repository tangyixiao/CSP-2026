#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+10;
using PII=pair<int,int>;
int n,m,a[N],cnt[M],ans[M];
stack<PII>st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==m){
		for(int i=1;i<=n;i++){
			ans[a[i]]=n-i+1;
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cnt[j]=0;
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]){
				while(!st.empty()&&cnt[a[j]]<st.top().second){
					st.pop();
				}
			}
			cnt[a[j]]=j;
			st.push({a[j],j});
		}
		for(int j=1;j<=m;j++) cnt[j]=0;
		while(!st.empty()){
			int j=st.top().first;
			if(!cnt[j]) ans[j]++;
			cnt[j]=1;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
