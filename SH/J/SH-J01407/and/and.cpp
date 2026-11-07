#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int dig[32]; //第i位有多少个数存在该位
int n, m;
ll a[200009];

//本体必然先从大数开始寻找，在满足存在的数中接着找最大值
int max_(){
	for(int i = 31; i >= 0; i --){
		if(dig[i] >= m) return i;
	}
	return 0;
}

bool yes(int k, vector <ll> num){
	int cnt = 0;
	for(ll i : num) cnt += (i >> k) & 1;
	return cnt >= m;
}


int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
		for(int j = 0; j < 32; j ++) dig[j] += (a[i] >> j) & 1;
	}
	int max_log = max_();
	ll maxx = 1 << max_log;
	// 时间复杂度O(n log maxx).
	// ok存储可能可行的数，然后进行若干次次遍历查询，直到符合的数小于m。
	// 此时maxx即为最终解。 
	vector <ll> ok;
	for(int i = 1; i <= n; i ++){
		if((a[i] >> max_log) & 1) ok.push_back(a[i]);
	}
	for(int i = max_log - 1; i >= 0; i --){
		if(yes(i, ok)){
			maxx += (1 << i);
			vector <ll> tmp;
			for(ll j : ok){
				if((j >> i) & 1) tmp.push_back(j);
			}
			ok.clear();
			for(ll j : tmp) ok.push_back(j);
		}
	}
	
	cout << maxx;

	return 0;
}


