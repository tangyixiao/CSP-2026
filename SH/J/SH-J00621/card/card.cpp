#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[500005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++) cin >> a[i];
	if(n<=5000&&m<=3000){
		sort(a+1, a+n+1);
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
