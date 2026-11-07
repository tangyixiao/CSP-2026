#include<bits/stdc++.h>
using namespace std;
int a[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n ,m;
	cin >> n >> m;
	int b;
	for(int i = 0;i < n;i++){
		cin >> b;
		a[i] = b;
	}
	sort(a,a+n,greater<int>());
	int ans;
	ans = a[0];
	for(int i = 1;i < m;i++){
		ans = ans & a[i];
	}
	
	cout << ans;
	return 0;
} 
