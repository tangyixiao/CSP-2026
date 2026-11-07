#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200009];
int cnt[300009];
void solvebig(){
	for(int i=0; i<n; i++){
		if(a[i] != a[i+1]){
			cnt[a[i]] = i+1;
		}
	}
	for(int i=1 ;i<=m; i++){
		cout << cnt[i] << " ";
	}
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >>m;
	bool big = true;
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i] < a[i-1]){
			big = false;
		}
	}
	if(big){
		solvebig();
	}
	return 0;
}
