#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[2005];
vector<int> ma;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		int maxn = -2e9;
		for (int i : a) {
			if (i > maxn) {
				maxn = i;
			}
		}
		cout << maxn;
	}
	else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i != j) ma.push_back(a[i] & a[j]);
			}
		}
		int maxn = -2e9;
		for (int i : ma) {
			if (maxn < i) maxn = i;
		}
		cout << maxn;
	}
	else if (n <= 20) {
		if (m == 1) {
			int maxn = -2e9;
			for (int i : a) {
				if (i > maxn) {
					maxn = i;
				}
			}
			cout << maxn;
		}
		else if (m == 2) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					if (i != j) ma.push_back(a[i] & a[j]);
				}
			}
			int maxn = -2e9;
			for (int i : ma) {
				if (maxn < i) maxn = i;
			}
			cout << maxn;		
		} 
		else if (m == 3) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					for (int k = 1; k <= n; k++)
						if (i != j && i != k && j != k) ma.push_back(a[i] & a[j] & a[k]);
				}
			}
			int maxn = -2e9;
			for (int i : ma) {
				if (maxn < i) maxn = i;
			}
			cout << maxn;
		}
		else if (m == 4) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					for (int k = 1; k <= n; k++) {
						for (int g = 1; g <= n; g++)
							if (i != j && i != k && i != g && j != k && j != g && k != g) ma.push_back(a[i] & a[j] & a[k] & a[g]);
					}	
				}
			}
			int maxn = -2e9;
			for (int i : ma) {
				if (maxn < i) maxn = i;
			}
			cout << maxn;
		}
		else if (m == 5) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					for (int k = 1; k <= n; k++) {
						for (int g = 1; g <= n; g++){
							for (int l = 1; l <= n; l++)
							if (i != j && i != k && i != g && i != l && j != k && j != g && j != l && k != g && k != l && g != l) ma.push_back(a[i] & a[j] & a[k] & a[g] & a[l]);
						}	
					}	
				}
			}			
			int maxn = -2e9;
			for (int i : ma) {
				if (maxn < i) maxn = i;
			}
			cout << maxn;
		}
		else if (m == 6) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					for (int k = 1; k <= n; k++) {
						for (int g = 1; g <= n; g++){
							for (int l = 1; l <= n; l++){
								for (int c = 1; c <= n; c++)
								if (i != j && i != k && i != g && i != l && i != c && j != k && j != g && j != l && j != c && k != g && k != l && k != c && g != l && g != c && l != c) ma.push_back(a[i] & a[j] & a[k] & a[g] & a[l] & a[c]);
							}
						}	
					}	
				}
			}				
			int maxn = -2e9;
			for (int i : ma) {
				if (maxn < i) maxn = i;
			}
			cout << maxn;
		}
		else if (m == 7) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					for (int k = 1; k <= n; k++) {
						for (int g = 1; g <= n; g++){
							for (int l = 1; l <= n; l++){
								for (int c = 1; c <= n; c++) {
									for (int v = 1; v <= n; v++) {
										if (i != j && i != k && i != g && i != l && i != c && i != v && j != k && j != g && j != l && j != c && j != v && k != g && k != l && k != c && k != v && g != l && g != c && g != v && l != c && l != v && c != v) ma.push_back(a[i] & a[j] & a[k] & a[g] & a[l] & a[c] & a[v]);
									} 
								}
							}
						}	
					}	
				}
			}			
			int maxn = -2e9;
			for (int i : ma) {
				if (maxn < i) maxn = i;
			}
			cout << maxn;
		}
		else if (m == 8) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					for (int k = 1; k <= n; k++) {
						for (int g = 1; g <= n; g++){
							for (int l = 1; l <= n; l++){
								for (int c = 1; c <= n; c++) {
									for (int v = 1; v <= n; v++) {
										for (int b = 1; b <= n; b++)
										if (i != j && i != k && i != g && i != l && i != c && i != v && i != b && j != k && j != g && j != l && j != c && j != v && j != b && k != g && k != l && k != c && k != v && k != b && g != l && g != c && g != v && g != b && l != c && l != v && l != b && c != v && c != b && v != b) ma.push_back(a[i] & a[j] & a[k] & a[g] & a[l] & a[c] & a[v] & a[b]);
									} 
								}
							}
						}	
					}	
				}
			}			
			int maxn = -2e9;
			for (int i : ma) {
				if (maxn < i) maxn = i;
			}
			cout << maxn;
		}else if (m == 9) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= n; j++) {
					for (int k = 1; k <= n; k++) {
						for (int g = 1; g <= n; g++){
							for (int l = 1; l <= n; l++){
								for (int c = 1; c <= n; c++) {
									for (int v = 1; v <= n; v++) {
										for (int b = 1; b <= n; b++){
											for (int h = 1; h <= n; h++) {
												if (i != j && i != k && i != g && i != l && i != c && i != v && i != b && i != h && j != k && j != g && j != l && j != c && j != v && j != b && j != h && k != g && k != l && k != c && k != v && k != b && k != h && g != l && g != c && g != v && g != b && g != h && l != c && l != v && l != b && l != h && c != v && c != b && c != h && v != b && v != h && b != h) ma.push_back(a[i] & a[j] & a[k] & a[g] & a[l] & a[c] & a[v] & a[b] & a[h]);
											}
										}
									}
								}
							}
						}	
					}	
				}
			}			
			int maxn = -2e9;
			for (int i : ma) {
				if (maxn < i) maxn = i;
			}
			cout << maxn;			
		}

	}
	return 0;
}

