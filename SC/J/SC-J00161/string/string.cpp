#include <bits/stdc++.h>
using namespace std;
long long n, a[200001];
char c[200001];
long long ed, be = 1, bea = 0, eda = 0;
bool check(int be, int ed, int bea, int eda){
	if(eda != 0 || bea != 0){
		if(be >= ed){
			return false;
		}else {
			return true;
		}
	}else {
		if (be >= ed){
			return false;
		}else {
			return true;
		}
	}
}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	ed = n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	long long sum = 0;
	while(check(be,ed,bea,eda)){
		if(bea != 0){
			if(bea >= a[ed]){
				bea -= a[ed];
				if(c[be] != c[ed]){
					sum += a[ed];
				}
				if(bea == 0) {
					be++;
					ed--;
				}
			}else {
				eda = a[ed] - bea;
				if(c[ed] != c[be]){
					sum += bea;
				}
				be++;
				
			}
		}
		if(eda != 0) {
			if(eda >= a[be]){
				eda -= a[be];
				if(c[be] != c[ed]){
					sum += a[be];
				}
				if(eda == 0) {
					ed--;
					be++;
				}
			}else {
				bea = a[be] - eda;
				if(c[ed] != c[be]){
					sum += eda;
				}
				ed--;
				
			}
		}
		if(bea == 0 && eda == 0){
			if(a[be] == a[ed] && c[be] == c[ed]){
				be++;
				ed--;
			}else if(a[be] == a[ed] && c[be] != c[ed]){
				be++;
				ed--;
				sum += a[be];
			}else {
				if(c[be] == c[ed]) {
					if (a[be] > a[ed]){
						bea = a[be] - a[ed];
						ed--;
					}else {
						eda = a[ed] - a[be];
						be++;
					}
				}else {
					if (a[be] > a[ed]){
						bea = a[be] - a[ed];
						sum += a[ed];
						ed--;
					}else {
						eda = a[ed] - a[be];
						sum += a[be];
						be++;
					}
					
				}
			}
		}
		//cout << be << " " << bea << " " << ed << " " << eda << " " << sum << "\n";
	}
	cout << sum;
	return 0;
}