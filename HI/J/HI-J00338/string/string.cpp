#include <bits/stdc++.h>
using namespace std;
string a, b;
long long n, m, ans;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> m >> a;
		for(int j=1;j<=m;j++){
			b=b+a;
		}
	}
	int k=b.size();
	int l=0, r=k-1;
	while(l<r){
		if(b[l]!=b[r]){
			b[l]=b[r];
			ans++;
		}
		l++, r--;
		//cout << l << ' ' << r << endl;
	}
	cout << ans;
	return 0;
} //aabbc  
/*
3
2 a
2 b
1 c
*/ 
