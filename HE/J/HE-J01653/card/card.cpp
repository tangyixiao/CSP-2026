#include<bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;

int n , m;
int a[MAXN] , ans;

int main(){
//	freopen("card.in" , "r" , stdin);
//	freopen("card.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	for(int i = 1; i <= n ; i++)	cin >> a[i];
	for(int i = 1 ; i <= n ; i++){
		if(a[i] == a[i - 1])	ans++;
	}
	cout << n - ans;
}
