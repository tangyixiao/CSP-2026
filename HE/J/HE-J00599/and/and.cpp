#include<bits/stdc++.h>
using namespace std;

bool cmp(int x, int y){
	return x>y;
}

int a[200010];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	if(m==1){
		int big = 0;
		for(int i=1; i<=n; i++){
			big = max(big, a[i]);
		}
		cout << big;
		return 0;
	}
	if(m==n){
		int small = 200010;
		for(int i=1; i<=n; i++){
			small = min(small, a[i]);
		}
		cout << small;
		return 0;
	}
	sort(a+1, a+n+1, cmp);
	cout << a[m];
	
	//¿Õ±¯ÇÐ 
	
	return 0;
}
