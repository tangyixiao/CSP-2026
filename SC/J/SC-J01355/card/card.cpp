#include<bits/stdc++.h>
using namespace std;

int main() {

	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	int m, n;
	cin >> m >> n;
	int a[m], t[n + 1] = {0};
	int b[m];
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	for (int f = 0; f < n; f++) {
		for(int i=0;i<m;i++){
		b[i]=a[i];
		}

		for (int i = f; i < n; i++) {
			for (int j = i + 1; j < m; j++) {
				
				if (b[i] == b[j]) {
					for (int k = i; k < j; k++) {
						b[k] = 0;

					}
				}
			}
		}
		for (int j = f; j < m; j++) {
			if (b[j] != 0) {
				t[b[j]]++;
			}

		}

	}
	t[n]++;
	for (int i = 1; i < n+1; i++) {
		cout << t[i] << " ";
	}

	return 0;
}
