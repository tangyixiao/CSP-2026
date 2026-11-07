#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],vis[300005],vis2[300005];
map <long long,long long> mp;
vector<long long> op[300005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		set <long long> st;
		for(int j=n;j>=i;j--){
			if(st.count(a[j])==0 && (st.count(a[j+1])==1 || j==n)){
				vis[a[j]]++; 
			}
			st.insert(a[j]);
		}
	}
	for(int i=1;i<=m;i++){
		cout<<vis[i]<<' ';
	}
	return 0;
}