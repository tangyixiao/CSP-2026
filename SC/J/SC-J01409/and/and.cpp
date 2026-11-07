#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
unsigned long long ans = 0;
int n, m, Cnt;
int a[N];
bool cmp(int x,int y){
	return x < y;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i<=n; i++){
		cin >> a[i];
	}
	sort(a+1, a+1+n, cmp);
	ans = a[n];
	for(int i = n; i>=1; i--){
		if(Cnt>=m) break;
		for(int j = i; j<=100; j--){
			if((i-j)<1) break;
			if(ans&a[i-j] > ans&a[i]){
				i-=j;
				break;
			}
		}
		ans&= a[i];
		Cnt++;
	}
	cout << ans;
	return 0;
} 