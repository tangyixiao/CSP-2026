#include<bits/stdc++.h>
using namespace std;

	int n;
	int a[200010];
	char c[200010];
	int t[200010];
	int l,r; 
	long long ans = 0;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		t[i] = a[i];
	}
	l = 1,r = n;
	while(true){
		if (l < r){
			if (c[l] == c[r]){
				if (t[l] < t[r]){
					t[r] -= t[l];
					t[l] = 0;
					l++;
				}
				else if (t[l] > t[r]){
					t[l] -= t[r];
					t[r] = 0;
					r--;
				}
				else{
					t[l] = 0;
					t[r] = 0;
					l++,r--;
				}
			}
			else{
				if (t[l] < t[r]){
					ans += (long long)t[l];
					t[r] -= t[l];
					t[l] = 0;
					l++;
				}
				else if (t[l] > t[r]){
					ans += (long long)t[r];
					t[l] -= t[r];
					t[r] = 0;
					r--;
				}
				else{
					ans += (long long)t[l];
					t[l] = 0;
					t[r] = 0;
					l++,r--;
				}
			}
		}
		else{
			cout << ans << endl;
			return 0;
		}
	}
	return 0;
} 
