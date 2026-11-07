#include <bits/stdc++.h>
using namespace std;
int ma=0;
int ls;
int main(){
	freopen("and.in","r", stdin);
	freopen("and.out", "w",stdout);
	int n,m;
	cin >> n >> m;
	int a[n+1];
	a[0] = 0;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int j=1;j<=n;j++){
		ls=a[j] and a[j-1];
		if(ls>ma) ma =ls;
	}
	cout << ma;
	return 0;
}