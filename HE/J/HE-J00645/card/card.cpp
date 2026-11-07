#include <bits/stdc++.h>

using namespace std;

const int N = 5e5 + 5;
long long n , m;

struct node {
	long long val , las;	
}a[N];

int main() {
	
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	
	cin >> n >> m;
	for(long long i = 1; i <= n; i++) {
		cin >> a[i].val;
		a[i].las = max(a[i].las , i);
	}
	for(int i = 1; i <= n; i++) cout << a[i].las << " ";
	
	return 0;
}

// I love CCF! 
// RP++ 
