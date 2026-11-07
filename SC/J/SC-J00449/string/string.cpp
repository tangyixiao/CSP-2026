#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int main(){
	freopen("string.in","r",stdin);
	int n;
	cin >> n;
	vector<int> a1(n), a2(n);
	vector<char> c1(n), c2(n);
	for (int i = 0; i < n; ++i) {
		cin >> a1[i] >> c1[i];
		a2[i] = a1[i];
		c2[i] = c1[i];
	}
	//reverse(a2.begin(), a2.end());
	//reverse(c2.begin(), c2.end());
	int tot1 = 0, tot2 = n - 1;
	long long ans = 0;
	for (int i = 0; i < n && tot1 <= tot2; ++i) {
		if(c1[tot1] != c2[tot2]) {
			if(a1[tot1] < a2[tot2]) {
				a2[tot2] -= a1[tot1];
				ans += a1[tot1++];
			}
			else if(a1[tot1] == a2[tot2]){
				ans += a1[tot1++];
				tot2--;
			}
			else{
				a1[tot1] -= a2[tot2];
				ans += a2[tot2--];
			}
		}
		else {
			if(a1[tot1] < a2[tot2]) {
				a2[tot2] -= a1[tot1++];
			}
			else if(a1[tot1] == a2[tot2]){
				tot1++;
				tot2--;
			}
			else{
				a1[tot1] -= a2[tot2--];
			}
		}
	}
	cout << ans;
	freopen("string.out","w",stdout);
	return 0;
}