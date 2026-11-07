#include<bits/stdc++.h>
using namespace std;
const int N = 500005, M = 300005;
int n, m, a[N], s[M], S[M], sum[M];//s[i]表示第i个位置的数 
bool flag = 0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(a[i - 1] > a[i]) flag = 1;
	}
	if(flag == 0){
		int x[M];
		for(int i = 1; i <= n; i++){
			x[a[i]]++;
		}
		for(int i = 1; i <= m; i++){
			cout << ceil(x[i] * 1.0 / 2) << ' ';
		}
		return 0;
	}
	for(int i = 1; i <= n; i++){
		int nw = 0;
		for(int j = i; j <= n; j++){
			if(S[a[j]] == 0){
				nw++;
				if(s[nw] != 0) S[s[nw]] = 0;
				s[nw] = a[j];
				S[a[j]] = nw;
			}else{
				for(int k = S[a[j]] + 1; k <= nw; k++){
					S[s[k]] = 0;
					s[k] = 0;
				}
				nw = S[a[j]];
			}
//			cout << nw << ' ';
//			for(int j = 1; j <= m; j++){
//				cout << s[j] << ' ';
//			}
//			cout << '\n';
		} 
		for(int j = 1; j <= m; j++){
			if(S[j] != 0){
				sum[j]++;
			}
		}
//		cout << '\n';
		for(int j = 1; j <= m; j++){
			s[j]=S[j]=0;
		}
	}
	for(int i = 1; i <= m; i++){
		cout << sum[i] << ' ';
	}
	return 0;
}
/*
6 4
1 1 2 3 3 4

*/