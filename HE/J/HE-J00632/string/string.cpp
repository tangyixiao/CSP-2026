#include <bits/stdc++.h>

using namespace std;

const int N = 200010;
int n, a[N];
char c[N];

int main ()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> a[i] >> c[i];
	}

	long long ans = 0;
	int l=1, r=n;
	while (l < r){
		if (c[l] != c[r]){
//			if (l+1 == r){
//				ans += (a[l] + a[r])/2;
//				break;
//			}
			
			if (a[l] > a[r]){
				ans += a[r];
				a[l] = a[l] - a[r];
				r--;
			}else if (a[l] < a[r]){
				ans += a[l];
				a[r] = a[r] - a[l];
				l++;
			}else{
				ans += a[l];
				l++;
				r--;
			}
		}else{
			
			if (a[l] < a[r]){
				a[r] = a[r] - a[l];
				l++;
			}else if (a[l] > a[r]){
				a[l] = a[l] - a[r];
				r--;
			}else{
				l++;
				r--;
			}
		}
		
	}

	cout << ans;
	
	return 0;
}
