#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int maxn = INT_MIN;
	for(int i = 0;i < n;i ++){
		cin >> a[i]; 
	}
	for(int i = 1;i < n;i ++){
		int x = a[i] & a[i-1];
		maxn = max(maxn,x);
	}
	cout << maxn;
	return 0; 
}
