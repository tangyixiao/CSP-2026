#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
const int MAXN = 5e5 + 5;
const int MAXM = 3e5 + 5;
int n,m,a[MAXN],ans[MAXM];
bool used[MAXM];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n >> m;
	for (int i = 1;i<=n;i++) cin >> a[i];
	for (int i = 1;i<=n;i++){
		stack<int> sta;
		memset(used,0,sizeof(used));
		for (int j = i;j<=n;j++){
			if (!used[a[j]]){
				sta.push(a[j]);
				used[a[j]] = 1;
			}
			else{
				while ((!sta.empty()) && sta.top() != a[j]) sta.pop();
				if ((!sta.empty()) && sta.top() == a[j]) sta.pop();
				sta.push(a[j]);
			}
		}
		while (!sta.empty()){
			ans[sta.top()]++;
			sta.pop();
		}
	}
	for (int i = 1;i<=m;i++) cout << ans[i] << " ";
}