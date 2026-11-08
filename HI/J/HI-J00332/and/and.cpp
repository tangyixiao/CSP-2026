#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n,m,a[N],ans;
vector<int> st;
void dfs(int x,int last){
	if(x == m + 1){
		int cc = (st[0] & st[1]);
		for(int i = 2;i < m;i++){
			cc = (cc & st[i]);
		}
		ans = max(ans,cc);
		return;
	}
	for(int i = last + 1;i <= n;i++){
		st.push_back(a[i]);
		dfs(x + 1,i);
		st.pop_back();
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	dfs(1,0);
	cout << ans;
	return 0;
}
