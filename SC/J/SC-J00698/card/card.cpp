#include<bits/stdc++.h>
using namespace std;
int a[1000005], b[1000005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		for (int j = i - 1; j < n; j++) {
			b[j] = a[j];
			for(int y=0;y<j;y++){
				if(b[j]==b[y]){
					b[0] = a[j];
					for (int k = 1; k < n; k++) {
						b[k] = 0;
					}
				}
			}
			if (a[j] == b[j]) {
				
			}

		}
		for (int j = 0; j < n; j++) {
			for (int z = 1; z <= m; z++) {
				if (b[j] == z) {
					cout << i + 1<< " ";
				}
			}


		}
		for (int j = 0; j < n; j++) {
			b[i] = 0;
		}
	}

	return 0;
}