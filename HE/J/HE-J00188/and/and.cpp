#include <bits/stdc++.h>
using namespace std;
int n,m;


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int t;
	cin >> n >> m;
	int a[n+4];
	for (int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	sort (a+1,a+n+1);
	t = a[n];
	for (int i = n-1;i >= n-m;i--){
		t = t & a[i];
	}
	cout << t;
	return 0;
}
