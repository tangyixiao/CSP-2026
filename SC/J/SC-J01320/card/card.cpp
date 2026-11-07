int a[500005];
int cnt[300005];
int n, m;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++){
		vector <int> b;
		for (int q = 0; q < n; q++) b.push_back(a[q]);
		for (int j = i; j < n; j++){
		 for (int k = j-1; k >= i; k--) if (b[k] == b[j]) b[k, j] = 0; 
		 for (int q = 0; q < n; q++) cnt[b[q]]++;
		}
	}
	return 0;
}