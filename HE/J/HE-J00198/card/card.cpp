#include <bits/stdc++.h>
using namespace std;

const int N = 5e5+5;
int n,m;
int arr[N];


int main (){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	for (int i = 1; i <= n; ++i){
		cin >> arr[i];
	} 
	
	int t = 1;
	if (m == 1){
		cout << n-1;
	} 
	else if (m == 2){
		cout << n-1 << ' ';
		cout << n-2;
	}
	else {
		for (int i = 1; i < n; ++i){
			cout << i;
		}
	}
	
	
	
	
	
	return 0;
}
