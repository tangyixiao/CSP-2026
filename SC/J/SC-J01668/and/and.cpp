#include <iostream>
#include <cstdio>
#include <algorithm> 
using namespace std;

int n, m;
int a[200005];
int check(int x){
	int left = 1, right = n;
	int mid = (right - left) / 2;
	while(left <= right){
		if(a[mid] > x){
			right = mid - 1;
		} 
		if(a[mid] < x){
			left = mid + 1;
		}
		mid = (right - left) / 2;
	} 
	return mid;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	} 
	sort(a + 1, a + n + 1);
	if(m == 1){
		cout << a[n];
	}
	int ans = a[n] & a[n - 1];
	m -= 2;
	int last = n - 1;
	while(m != 0){
		m--;
		int p = check(ans);
		if(p == last){
			p--;
		}
		ans = ans & a[p];
	}
	cout << ans << "\n";
	return 0;
}