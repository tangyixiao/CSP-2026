#include <bits/stdc++.h>
using namespace std;
int a[500005],vis[300005];
vector<int> st;
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 1;i <= n;i++){
		st.clear();
		for(int j = i;j <= n;j++){
			if(find(st.begin(),st.end(),a[j]) != st.end()){
				int p = find(st.begin(),st.end(),a[j]) - st.begin();
				while(st.size() > p) st.pop_back();
			}
			st.push_back(a[j]);
		}
		for(int j : st) vis[j]++;
	}
	for(int i = 1;i <= m;i++) cout << vis[i] << " ";
	
	return 0;
}
