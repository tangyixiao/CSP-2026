#include<bits/stdc++.h>

using namespace std;

const int N = 5e5;
int n, m;
int a[N];
int ans[N];
int vis[N];
int dl[N];

void kk11(int jk){
	int kk = 0;
	for (int i = jk; i <= n; i++){
		int jl = 0;
		for (int j =kk; j >= 1; j--){
			if (dl[j] == a[i]){
//				cout << 1;
				jl = j;
				break;
			}
		}
		int jll = 0;
		for (int j = jl; j <= kk; j++){
			vis[dl[j]] = 0;
			dl[j] = 0;
			jll ++;
		} 
		kk -= jll; 
		kk++;
		dl[kk] = a[i];
		vis[a[i]] = 1;
//		for (int i = 1; i <= kk; i++){
//			cout <<dl[i] <<' ';
//		} 
//		cout << endl;
	} 
	for (int i = 1; i <= m; i++){
		if (vis[i] == 1){
			ans[i] ++;
		}
	}
	return;
}

int main(){
	cin >> n >> m;
	for (int i = 1;i <= n; i++){
		cin >> a[i];
	} 
	for (int i = 1; i <= n; i++){
		memset(vis, 0, sizeof(vis));
		memset(dl, 0, sizeof(dl));
		kk11(i);
	}
	for (int i = 1; i <= m; i++){
		cout << ans[i] << ' ';
	} 
	return 0;
} 
