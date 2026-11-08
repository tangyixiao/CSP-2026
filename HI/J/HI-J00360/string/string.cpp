#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const ll MAXN = 2e5 + 7;
int arr[MAXN] = {}, n, p1, p2;
ll ans = 0;
char c[MAXN] = {};

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for(int i = 1; i <= n; i++) cin >> arr[i] >> c[i];
	p1 = 1;
	p2 = n;
	while(p1 < p2){
		if(arr[p1] < arr[p2]){
			if(c[p1] != c[p2]) ans += arr[p1];
			arr[p2] -= arr[p1];
			++ p1;
		} else if(arr[p1] > arr[p2]){
			if(c[p1] != c[p2]) ans += arr[p2];
			arr[p1] -= arr[p2];
			-- p2;
		} else {
			if(c[p1] != c[p2]) ans += arr[p1];
			++ p1;
			-- p2;
		}
	}
	cout << ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
