#include <iostream>
using namespace std;

long long arr[int(2e5 + 10)], revarr[int(2e5 + 10)];
char crr[int(2e5 + 10)], revcrr[int(2e5 + 10)];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, sum = 0;
	cin >> n;
	for(long long i = 1;i <= n;i++){
		cin >> arr[i] >> crr[i];
		sum += arr[i];
		revarr[n - i + 1] = arr[i], revcrr[n - i + 1] = crr[i];
		arr[i] += arr[i - 1];
	}
	for(long long i = 1;i <= n;i++){
		revarr[i] += revarr[i - 1];
	}
	long long p = 1, q = 1, ans = 0;
	for(long long i = 1;i <= sum / 2;i++){
		long long new_i = min(arr[p], revarr[q]);
		if(crr[p] != revcrr[q]) ans += new_i - i + 1;
		i = new_i;
		if(arr[p] < revarr[q]) p++;
		else if(arr[p] > revarr[q]) q++;
		else p++, q++;
	}
	cout << ans << endl;
	return 0;
}
