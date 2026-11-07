#include<bits/stdc++.h>
using namespace std;
std::ifstream fin("and.in");
std::ofstream fout("and.out");
const int maxn = 200000 + 5;
long long a[maxn];
int main(){
	int n, m;
	fin >> n >> m;
	for (int i = 1; i <= n; i++){
		fin >> a[i];
	}
	sort(a + 1, a + 1 + n, greater<long long>());
	if (m == 1) {
		fout << a[1] << "\n";
		return 0;
	}
	if (m == n || m == n - 1){
		long long sum = 1;
		for (int i = 1; i <= m; i++){
			sum = sum & a[i];
		}
		fout << sum << "\n";
		return 0;
	}
	if (m == 2){
		long long ans = 1;
		for (int i = 1; i <= n; i++){
			for (int j = i + 1; j <= n; j++){
				ans = max(ans, a[i] & a[j]);
			}
		}
		fout << ans << "\n";
		return 0;
	}	
	long long ans = 1;
	for (int i = 1; i <= m; i++){
		ans = ans & a[i];
	}
	fout << ans << "\n";
	
	return 0;
}
