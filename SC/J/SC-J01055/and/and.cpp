#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAXN = 2e5 + 5;
int n,m,a[MAXN];
vector<int> v[31];
bool can[31];
bool cmp(int a,int b){
	return a > b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n >> m;
	for (int i = 1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1,cmp);
	for (int i = 1;i<=n;i++){
		for (int j = 30;j>=0;j--){
			if (a[i] & (1<<j)){
				v[j].push_back(i);
			}
		}
	}
	vector<int> now;
	for (int j = 30;j>=0;j--){
		if (v[j].size() >= m && now.size() == 0){
			can[j] = 1;
			now = v[j];
			continue;
		}
		if (v[j].size() < m) continue;
		vector<int> k;
		int p = 0,q = 0;
		while (p < v[j].size() && q < now.size()){
			if (v[j][p] == now[q]){
				k.push_back(now[q]);
				p++;q++;
			}
			if (v[j][p] > now[q]) p++;
			if (v[j][p] < now[q]) q++;
		}
		if (k.size() >= m){
			now = k;
			can[j] = 1;
		}
	}
	int ans = 0;
	for (int i = 0;i<=30;i++) if (can[i]) ans += (1<<i);
	cout << ans;
}