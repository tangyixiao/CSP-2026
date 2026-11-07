#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,k;
	cin >> n >> k;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];	
	}
	for(int i = 1; i <= k; i++){
		cout << n << " ";
	}
	return 0;
}
