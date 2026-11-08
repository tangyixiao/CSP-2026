#include <bits/stdc++.h>
using namespace std;
int n;
int sum = 0;
int k = 1;
int a[1000005];
char c[1000005];
int num = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	string m = " ";
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	if (n == 1)
	{
		cout << 0;
		return 0;
	}
	if (n == 2)
	{
		if (c[1] != c[2]) cout << max(a[1],a[2]) - min(a[1],a[2]);
		else cout << 0;
		return 0;
	}    
	int cw = n, ct = 1,aw = n, at = 1;  //cw(aw)从最后行前递减，与ct(at)相反。 
	int d = 1;                                     
	while (d == 1){
		int h = min(a[aw], a[at]);
		a[aw] -= h;
		a[at] -= h;
		if (a[at] == 0 && a[aw] == 0) {at ++; ct ++; aw --; cw --;}
		else if (a[at] == 0) {at ++; ct ++;}
		else if (a[aw] == 0) {aw --; cw --;}	
		if (c[cw] != c[ct]) {
			num += h;
		}
		if (aw - at <= 1) d = 2;
	}              
	cout << num;
	return 0;
}
