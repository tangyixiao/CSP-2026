#include <iostream>
#include <cmath>
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int n, m;
	string x, y;
	cin >> n >> x >> m >> y;
	if(n != m){
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	cout << 1;
	int p, q;
	p = (x[0] - '0') * 10 + (x[1] - '0');
	q = (y[0] - '0') * 10 + (y[1] - '0');
	if(p != q){
		cout << 0 << 0 << 0;
		return 0;
	}
	cout << 1;
	int b = x[2] - 'A', d = y[2] - 'A';
	if((b <= 2 && d > 2) || (b > 2 && d <= 2)){
		cout << 0 << 0;
		return 0;
	}
	cout << 1;
	if(abs(b - d) != 1){
		cout << 0;
		return 0;
	}
	cout << 1;
	return 0;
}
