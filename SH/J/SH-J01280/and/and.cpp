#include<bits/stdc++.h> 

using namespace std;

int n, m, c, ans, t, v, p;
int a[200005], o[11];
int b[31][200005];

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 0; i < n; i ++){
		cin >> a[i];
		t = a[i];
		v = 30;
		while(t){
			b[v][i] = t % 2;
			t /= 2;
			v --;
		} 
	} 
	
	if(m == 1){
		sort(a, a + n);
		cout << a[n - 1] << endl;
		return 0;
	}
	if(m == n){
		for(int k = 0; k <= 30; k ++){
					p = b[k][0]; 
					for(int l = 1; l < m; l ++){
						p *= b[k][l]; 
					}
					if(p){
						t = 1;
						for(int l = 0; l < 30 - k; l ++){
							t *= 2;
						}
						ans += t;
					}
				}
				cout << ans << endl;
				return 0; 
	}
	
	if(n > 2000){
		sort(a, a + n);
		cout << a[n - 1 - m] << endl;
		return 0;
	}
	
	
	for(int i = 0; i <= 30; i ++){
		c = 0;
		for(int j = n - 1; j >= 0; j --){
			if(b[i][j]){
				o[c] = j;
				c ++;
			}
			if(c >= m){
				for(int k = 0; k <= 30; k ++){
					p = b[k][o[0]];
					for(int l = 1; l < m; l ++){
						p *= b[k][o[i]]; 
					}
					if(p){
						t = 1;
						for(int l = 0; l < 30 - k; l ++){
							t *= 2;
						}
						ans += t;
					}
				}
				cout << ans << endl;
				return 0; 
			}
		}
	}
	
	return 0;
}
