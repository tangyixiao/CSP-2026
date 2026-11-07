#include<bits/stdc++.h>
using namespace std;
int n, r, w,bq;
int a[300005], shu[300005];
char c[300005], ans[10000005];
long long num;
long long an;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		if(i>1){
			if(c[i]!=c[i-1]) bq=1;
		}
		for (int j = 1; j <= a[i]; j++) {
			ans[j] = c[i];
}
		num += a[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
else	if(n==2&&bq==0){
		cout<<0;
		return 0;
	}
	else if(n==2&&bq!=0){
		cout<<1;
		return 0;
	}
	for (int i = 1; i <= num / 2; i++){
		
		if (ans[i] != ans[num + 1 - i]) {
			an++;
		}
	} 
	cout << an;
	return 0;
}
