#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	vector<int> a(n+1),ans(m+1);
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n>5000){
		for(int i=1;i<n;i++){
			int l=a[i],r=a[i+1];
			if(l!=r) cout<<i<<' ';
		}
		cout<<n;
		return 0;
	}
	for(int i=1;i<=n;i++){
		unordered_set<int> st;
		stack<int> ak;
		for(int j=i;j<=n;j++){
			if(st.count(a[j])) while(ak.top()!=a[j]) st.erase(ak.top()),ak.pop();
			else{
				st.insert(a[j]);
				ak.push(a[j]);
			}
		}
		while(!ak.empty()){
			ans[ak.top()]++;
			ak.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
