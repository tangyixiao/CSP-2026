#include <bits/stdc++.h>
using namespace std;
long long n, m, t, a[500005], v[500005], v1[500005], k[500005], v2[500005];
bool f = 1;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
		v[a[i]] ++;
		if(i > 1 && a[i] < a[i - 1]) f = 0;
	}
	if(f){
		for(int i = 1; i <= m; i ++){
			v[i] += v[i - 1];
			cout << v[i] << " ";
		}
	}
	for(int i = 1; i <= n; i ++){
		t = 0;
		for(int j = i; j <= n; j ++){
			t ++;
			k[t] = a[j];
			v1[a[j]] ++;
			if(v1[a[j]] > 1){
				v1[a[t]] --;
				t --;
				while(t){
					if(a[t] == a[j]) break;
					v1[a[t]] --;
					t --;
				}
			}
		}
		for(int j = 1; j <= m; j ++){
			if(v1[j]){
				v2[j] ++;
			}
			v1[j] = 0;
		}
	}
	for(int i = 1; i <= m; i ++) cout << v2[i] << " ";
	return 0;
	fclose(stdin);
	fclose(stdout);
}
