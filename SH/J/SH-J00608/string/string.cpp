#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long a[N], A[N];
char c[N];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++){
		cin >> A[i] >> c[i];
		a[i] = sum + A[i];
		sum += A[i];
	}
	long long mid = 0;
	char f;
	int fmid = 0;
	for (int i = 1; i <= n; i++){
		mid += A[i];
		if (2 * mid > sum) {
			f = c[i];
			fmid = i;
			break;
		}
	}
	for (int i = 1; i <= n; i++){
		cout << a[i] << ' ';
	}
	cout << endl;
	long long ans = 0;
	long long r = n, amid = (sum + 1) / 2;
	for (int i = 1; i <= fmid - 1;){
		if (a[i] < (sum - a[r])){
			i++;
			ans += sum - a[r] - a[i];
			cout << "1 ";
		}
		else if ((sum - a[r - 1] + 1) < a[i - 1] + 1){
			r--;
			ans += (a[i - 1] + 1) - (sum - a[r - 1] + 1);
			cout << "2 ";
		}
		else{
			if (c[i] == c[r]){
				ans += abs(a[i] + 1 - sum + a[r - 1]);
				cout << "3 ";
			}
			else{
				ans += max(a[i] + 1, sum - a[r - 1]) - max(a[i - 1] + 1, sum - a[r]);
				cout << "4 ";
			}
			i++;
			r--;
		}
		cout << i << ' ' << r << ' ' << ans << '\n';
	}
	cout << ans;
	return 0;
}
