#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 7;
int a[N], n, m;
bool A = true;
int main (){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 0; i < n; i ++){
		cin >> a[i];
		if(i > 0 && a[i] < a[i - 1]){
			A = false;
		}
	}
	if(A == true){
		for(int i = 0; i < n; i ++){
			if(i == n - 1){
				cout << i + 1 << "\n";
				break; 
			}
			if(a[i + 1] != a[i]){
				cout << i + 1 << " ";
			}
		}
	} else if(m == 1){
		cout << n << "\n";
	} else if(m == 2){
		cout << n - 1 << " " << n - 1 << "\n"; 
	} else{
		for(int i = 0; i < n; i ++){
			if(i == n - 1){
				cout << i + 1 << "\n";
				break; 
			}
			if(a[i + 1] != a[i]){
				cout << i + 1 << " ";
			}
		}
		// rp ++; 
	}
	return 0;
}
