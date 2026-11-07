#include <bits/stdc++.h>
using namespace std;
struct nod{
	long long x;
	char y;
};
nod a[200005];
long long sum;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i].x >> a[i].y;
	}
	int i = 1;
	int j = n;
	while (i < j){
		if (a[i].x > a[j].x){
			if (a[i].y != a[j].y)
			sum += a[j].x;
			a[i].x -= a[j].x;
			j--;
		}
		if (a[j].x >= a[i].x){
			if (a[i].y != a[j].y)
			sum += a[i].x;
			a[j].x -= a[i].x;
			i++;
		}
	}
	cout << sum;
	return 0;
}