#include <bits/stdc++.h>
using namespace std;
struct ti{
	long long len;
	char it;
}tip[200050];
int main(){
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> tip[i].len >> tip[i].it;
	}
	int i = 1, j = n;
	long long  temp = 0, ans = 0;
	long long l = tip[1].len, r = tip[n].len;
	while (i < j){
		if(l < r){
			r -= l;
			temp = l;
			if (tip[i].it != tip[j].it){
				ans += temp;
			}
			l = tip[++i].len;
		}else if (l > r){
			l -= r;
			temp = r;
			if (tip[i].it != tip[j].it){
				ans += temp;
			}
			r = tip[--j].len;
		}else{
			temp = l;
			if (tip[i].it != tip[j].it){
				ans += temp;
			}
			l = tip[++i].len;
			r = tip[--j].len;
		}
		
	}
	cout << ans;
	fclose (stdin);
	fclose (stdout);
	return 0;
}
