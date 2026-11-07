#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	vector <int> a(n);
	vector <char> c(n);
	for(int i = 0;i < n;i++){
		cin >> a[i] >> c[i];
	}
	int i = 0,j = n - 1;
	long long ans = 0;
	while(i < j){
		if(a[i] == 0){
			i++;
			continue;
		}
		if(a[j] == 0){
			j--;
			continue;
		}
		if(a[i] < a[j]){
			if(c[i] != c[j]) ans += 1LL * a[i];
			a[j] -= a[i];
			i++;
		}else{
			if(c[i] != c[j]) ans += 1LL * a[j];
			a[i] -= a[j];
			j--;
		}
	}
	cout << ans;
	return 0;
}
