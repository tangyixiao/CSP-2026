#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[200010];

bool cmp(int x,int y){
	return x > y;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if (m == 1){
		sort(a + 1,a + n + 1,cmp);
		cout << a[1];
	}
	else if (m == n){
		int ans = (a[1] & a[2]);
		for (int i = 3;i <= n;i++){
			ans &= a[i];
		}
		cout << ans;
	}
	else if (m == 2){
		sort(a + 1 ,a + n + 1,cmp);
		cout << (a[1] & a[2]);
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
