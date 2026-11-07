#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >>n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	cout << n << m << a[1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
