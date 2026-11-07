#include <bits/stdc++.h>
using namespace std;
int n, a[200010], l, sum, p1, p2, m1, m2, aa;
char c[200010];
bool f = 1;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		if(i == 1){
			aa = a[1];
		}
		if(aa != a[i]){
			f = 0;
		}
		l += a[i];
	}
	//cout << f << '\n';
	if(f == 1){
		int x = 1, y = n;
		for(int i = 1; i <= n/2; i++){
			if(c[x] != c[y]){
				sum += aa;
			}
			x++;
			y--;
		}
		cout << sum;
		return 0;
	}
	p1 = 1;
	m1 = 1;
	p2 = n;
	m2 = a[n];
	//cout << l << '\n';
	for(int i = 1; i <= l/2; i++){
		//cout << c[p1] << ' ' << c[p2] << '\n';
		//cout << p1 << ' ' << m1 << ' ' << p2 << ' ' << m2 << '\n'; 
		if(c[p1] != c[p2]){
			sum++;
		}
		if(m1 == a[p1]){
			m1 = 1;
			p1++;
		}else{
			m1++;
		}
		if(m2 == 1){
			m2 = a[p2-1];
			p2--;
		}else{
			m2--;
		} 
	}
	cout << sum;
	return 0;
}