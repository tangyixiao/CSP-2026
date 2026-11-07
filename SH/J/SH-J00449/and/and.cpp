#include<bits/stdc++.h>
using namespace std;

	int n,m;
	long long p[200010];
	bool t[200010];
	int a[200010][40];
	string ans = " ";
	long long answer = 0;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int mx = 0; 
	for (int i = 1;i <= n;i++){
		cin >> p[i];
		long long t = p[i];
		int d = 0;
		while (t >= 2){
			a[i][++d] = t % 2;
			t /= 2;
		}
		if (t != 0){
			a[i][++d] = t;
		}
		if (d > mx){
			mx = d;
		}
	}
	for (int i = 1;i <= n;i++){
		for (int j = mx;j >= 1;j--){
			if (a[i][j] != 1){
				a[i][j] = 0;
			}
		}
	}
	for (int i = mx;i >= 1;i--){
		int nm = 0;
		int l[200010],ll = 0;
		for (int j = 1;j <= n;j++){
			if (t[j] == 0 && a[j][i] == 1){
				nm++;
			}
			else{
				l[++ll] = j;
			}
		}
		if (nm >= m){
			ans += '1';
			for (int k = 1;k <= ll;k++){
				t[l[k]] = 1;
			}
		}
		else{
			ans += '0';
		}
	}
	long long bb = 1;
	for (int i = mx;i >= 1;i--){
		answer += bb * (long long)(ans[i] - '0');
		bb *= 2;
	}
	cout << answer << endl;
	return 0;
} 
