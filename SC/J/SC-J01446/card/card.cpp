#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],cnt[300005];
int p[300005];
stack<int>st;
string s;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k = 1;k <= n;k++){
		memset(p,0,sizeof p);
		for(int i = k;i<=n;i++){
			p[a[i]]++;
			if(p[a[i]] > 1){
				while(st.top() != a[i]){
					st.pop();
				}
				p[a[i]] = 1;
			}
			else st.push(a[i]);
		}
		while(!st.empty()){
			cnt[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}