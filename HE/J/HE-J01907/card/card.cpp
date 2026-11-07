#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
vector<int> d;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	vector<int> a(n);
	vector<int> b(m);
	vector<bool> c(n);
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int s = 0;
	int v = 0;
	for (int i = 0; i < n; i++){
		for (int i = v; i < n; i++){
			if (c[i]){
				while (d[s] == a[i]){
					c[s] = 0;
					s--;
					d.pop_back();
				}
			}else{
				c[i] = 1;
				d.push_back(a[i]);
			}
			s++;
		}
		for (int i = 0; i < d.size(); i++){
			b[d[i] - 1]++;
		}
		d.clear();
		v++;
	}
	return 0;
}
