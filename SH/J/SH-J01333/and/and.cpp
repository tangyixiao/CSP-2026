#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[200005];

int xand(int a,int b){
	int mod = 1 << 30;
	int res = 0;
	int i=31;
	while(i > 0){
		bool bit_a = a / mod;
		a %= mod;
		bool bit_b = b / mod;
		b %= mod;
		if(bit_a and bit_b){
			res += mod;
		}
		i--;
		mod/=2;
	}
	return res;
}

int solve(int i,int s){
	if(s >= m){
		return a[i-1];
	}
	if(i >= n){
		return 0;
	}
	int case1 = solve(i+1,s);
	int case2 = xand(solve(i+1,s+1),a[i]);
	return max(case1,case2);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	if(n > 3000){
		return 0;
	}
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cout << solve(0,0);
}
