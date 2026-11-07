#incide <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;
	int m;
	int a[n-1];
	cin >> n >> m;
	for(int i = 0;i <= n-1;i++){
		cin >> a[i];
	} 
	cout << a[n-1];
	return 0;
}
