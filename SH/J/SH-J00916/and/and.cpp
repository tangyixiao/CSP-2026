#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int a[200005];
bool f[35][200005];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n>> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	memset(f, 1, sizeof f);
	int res = 0;
	for(int i = 31; i >= 0; i--){
		int cnt = 0;
		for(int j = 1; j <= n; j++){
			if(f[i+1][j]&&((1<<i)&a[j]))cnt++;
		}
		if(cnt<m){
			for(int j = 1; j <= n; j++){
				f[i][j] = f[i+1][j];
			}
		}else{
			res+=(1<<i);
			for(int j = 1; j <= n; j++){
				if(!f[i+1][j]||(!((1<<i)&a[j])))f[i][j] = 0;
			}
		}
	}
	cout << res <<endl;
	return 0;
}
