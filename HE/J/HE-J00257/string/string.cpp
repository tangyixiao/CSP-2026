#include<bits/stdc++.h>
using namespace std;
long long n;
int a[200005][2];
int b[200005][2];
long long nf = 0;
long long ans;
char pos2char(int x){
	/*
	int l = 1, r = n, mid = (l + r) / 2;
	while(l < r){
		if(b[mid][0] < x) l = mid + 1;
		else if(b[mid][0] == x) return b[mid][1];
		else if(b[mid][0] > x) r = mid - 1;
	}
	return b[r-1][1];
	*/
	
	for(int i = 1; i <= n; i++){
		if(b[i][0] >= x) return b[i][1];
	}
	return b[n][1];
	
}
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		long long x = 0;
		char y = 0;
		cin >> x >> y;
		a[i][0] = x; a[i][1] = y;
		nf += x;
	}
	b[1][0] = 1; b[1][1] = a[1][1];
	for(int i = 2; i <= n; i++){
		b[i][0] = a[i][0] + b[i-1][0];
		b[i][1] = a[i][1];
	}
	for(int i = 1; i <= nf / 2; i++){
		if(pos2char(i) != pos2char(nf - i + 1)) ans++;
	}
	cout << ans;
	return 0;
}
