#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long a[N];
int n,m;
long long dp[N];
bool bba[N][35];
bool b[N];
int num[35];
vector<int> ansnum;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	//cout << "ok\n";
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
		int tmp = a[i];
		for(int j = 30; j >= 0; j --) {
			int pj = pow(2,j);
			if(tmp >= pj) {
				tmp -= pj;
				bba[i][j] = 1;
				num[j]++;
			}
		}
	}
	/*for(int i = 1; i <= n; i ++) {
		for(int j = 30; j >= 0; j --) {
			cout << bba[i][j];
		}
		cout << "\n";
	}*/
	//cout << "ok\n";
	for(int i = 30; i >= 0; i --) {
		if(num[i] > m) {
			for(int j = 1; j <= n; j++) {
				if(b[j]) {
					continue;
				}
				if(bba[j][i]==0) {
					b[j] = 1;
					for(int k = 30; k >= 0; k --) {
						if(bba[j][k] == 1) {
							num[k]--;
						}
					}
				}
			}
		}
		/*for(int j = 30; j >= 1; j --) {
			cout << num[j] << " ";
		}
		cout << "\n";*/
		//cout << "------------------------------------------------------------\n";
		/*for(int i = 1; i <= n; i ++) {
			if(b[i]) {
				continue;
			}
			for(int j = 30; j >= 0; j --) {
				cout << bba[i][j];
			}
			cout << "\n";
		}*/
	}
	//cout << "ok\n";
	for(int i = 1; i <= n; i++) {
		if(b[i]) {
			//cout << i <<"\n";
			continue;
		}
		ansnum.push_back(a[i]);
	}
	//cout << "ok\n";
	sort(ansnum.begin(),ansnum.end(),greater<int>());
	//cout << "ok\n";
	int ans = ansnum[0];
	//cout << ansnum.size() << "\n";
	for(int i = 1; i < m; i++) {
		ans = ans & ansnum[i];
		//cout << ansnum[i] << "\n";
	}
	//cout << "ok\n";
	cout << ans;
	return 0;
}
