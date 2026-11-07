#include <iostream>
#include <cstring>
#include <stack> 
using namespace std;
int n, m;
bool vis[300005];
bool f[300005];
int a[500005];
int cnt[300005];
stack <int> st;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = 1;i <= n;i++){
		for (int j = i;j <= n;j++){
			if (vis[a[j]] == true){
				while (st.top() != a[j]) st.pop();
			}
			else{
				st.push(a[j]);
				vis[a[j]] = true;
			}
		}
		while (st.size() > 0){
			if (f[st.top()] == false){
				cnt[st.top()]++;
				f[st.top()] = true;
			}
			st.pop();
		}
		memset(f, 0, sizeof f);
		memset(vis, 0, sizeof vis);
	}
	for (int i = 1;i <= m;i++)
		cout << cnt[i] << " ";
	return 0;
}