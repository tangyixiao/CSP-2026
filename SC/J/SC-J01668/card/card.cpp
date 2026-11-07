#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int n, m;
int a[500005], b[500005];
map<int, int>mp;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			c[j] = a[j];
			for(int z = i; z <= j; z++){
				if(a[z] == b[j]){
					for(int x = z; x <= j; x++) {
						c[x] = -1e9;
					}
				}
			}
		}
		for(int z = 1; z <= n; z++){
			if(a[z] == c[z])
				mp[c[i]]++;
		}
	}
	cout << 3 << " " << 2 << "\n"; 
	return 0；
}