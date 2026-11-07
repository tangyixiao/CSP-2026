#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin >> m >> n;
	int a[m+5];
	for(int i=0;i<m;i++){
		cin >> a[i];
	}
	sort(a,a+m);
	cout << a[m-n];
	return 0;
}
