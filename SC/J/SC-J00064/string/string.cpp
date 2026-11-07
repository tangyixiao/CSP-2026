#include <bits/stdc++.h>
using namespace std;
#define MAXN 200005
long long ans, l, r, nl, nr, i = 1, ii = 1, sun = 1;
int k[MAXN], n;
char kk[MAXN];
string s = " ";
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	while(n--){
		scanf("%d", &k[i]); 
		cin >> kk[ii];
		for(int j = 1;j <= k[i];j++){
			s += kk[ii];
		}
		if(ii > 1 && kk[ii] == kk[ii - 1]){
			k[i - 1] += k[i];
		}else{
			i++; ii++;
		}
	}
	i--;
	if(i == 1){
		cout << 0;
		return 0;
	}
	l = 1; r = s.length() - 1; nl = k[1]; nr = k[i];
	while(sun < i - sun){
		int cc = abs(nl - nr);
		if(nl < nr){
			ans += nl;
			l += nl; r -= nl;
			nl = k[sun + 1]; nr = k[i - sun] + cc;
		}else{
			ans += nr;
			r -= nr; l += nr;
			nr = k[i - sun + 1]; nl = k[sun + 1] + cc;
		}
		sun++;
	}
	if(nl > k[sun]){
		nl -= k[sun];
	}else if(nr > k[i - sun + 1]){
		nr -= k[i - sun + 1];
	}
	ans += min(nr, nl);
	printf("%lld", ans);
	return 0;
}
