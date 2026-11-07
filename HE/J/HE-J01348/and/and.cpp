#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int n, m;
int a[N];

bool cmp(int a, int b){
	return a > b;
}

bool f = true;
int main(){
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		
		if(a[i] != i - 1){
			f = false;
		}
	}
	
	sort(a + 1, a + n + 1, cmp);
	
	if(f == true){
		int sum = a[1];
		for(int i = 2; i <= m; i++){
			sum &= a[i];
		}
		
		cout << sum;
		return 0;
	}
	
	if(m == 1){
		cout << a[1];
		return 0;
	}
	cout << a[m];
	return 0;
}
