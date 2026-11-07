#include<bits/stdc++.h>
using namespace std;
stack<int> st;
long long mp[300005];
long long n,m;
long long a[500005];
long long b[300005];
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
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			mp[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(mp[a[j]]==1){
				while(st.top()!=a[j]){
					mp[st.top()]=0;
					st.pop();
				}
			}
			else{
				mp[a[j]]=1;
				st.push(a[j]);
			}
		}
		while(st.size()){
			b[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
