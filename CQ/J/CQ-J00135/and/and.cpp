#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, a[N], s[N][32], m, ans, p;
bool d[N];
void z(int x, int y){
	string sum = "";
	int tot = -1;
	while(x){
		if(x % 2 == 1) sum += '1';
		else sum += '0';
		x /= 2;
	}
	for(int i = 0; i < sum.size(); i ++){
		s[y][++ tot] = sum[i] - '0';
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
		z(a[i], i);
	}
	memset(d, 1, sizeof(d));
	for(int i = 30; i >= 0; i --){
		p = 0;
		for(int j = 1; j <= n; j ++){
			if(s[j][i] == 1 && d[j]) p ++;
		}
		if(p >= m){
			for(int j = 1; j <= n; j ++){
			if(s[j][i] == 1 && d[j]) ;
			else d[j] = 0;
			}
			ans += (1 << i);
		}
	}
	cout << ans;
} 
/*
4 2
3 15 12 12
*/
