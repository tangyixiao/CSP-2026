#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	int n, m;
	cin >> n >> m;

	int list[n];
	for(int i = 0;i < n;i++){
		cin >> list[i];
	}

	sort(list, list + n, cmp);

	int rst = list[0];
	for(int i = 1;i < m;i++){
		rst = rst & list[i];
	}

	cout << rst;

	return 0;
}