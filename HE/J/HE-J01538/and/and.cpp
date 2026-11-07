#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int m;
	freopen("and,in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n;
	cin >> m;
	long long a[200100];
	int d[1000],f;
	int ans = 0;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= i;j++){
			if(a[j] < a[j + 1]){
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	d[0] = 0;
	bool s[n][m];
	for(int i = 1;i <= m;i++){
		d[i] = 0;
		for(int j = 1;a[i] > 0;j++){
			s[i][j] =a[i] % 2;
			a[i] /= 2;
			d[i]++;
		}
		f = max(d[i],d[i-1]);	
	}
	for(int i = 2;i <= m;i++){
		for(int j = 1;j <= f;j++){
			if(s[i][j] == 0){
				s[1][j] = 0;
			}
		}
	}
	int k = 1;
	for(int i = 1;i <= f;i++){
		if(s[1][i] == 1){
			ans += k;
		}
		k *= 2;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
