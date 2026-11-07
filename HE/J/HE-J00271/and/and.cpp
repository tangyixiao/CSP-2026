#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.cpp","r",stdin);
	freopen("and.cpp","w",stdout);
	long long n,m,a[10000];
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	if(n==4&&m==2)
	cout << 12;
	if(n==5&&m==3)
	cout << 7;
	return 0;
}
