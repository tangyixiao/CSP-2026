#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
priority_queue<long long> a;

int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		int x;
		cin >> x;
		a.push(x);
	}
	long long sum = a.top();
	a.pop();
	for(int i = 2;i <= m;i++){
		int x = a.top();
		a.pop();
		sum &= x;
	}
	cout << sum;
	return 0;
}