#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200006],sum,ans;
char c[200006],tag;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
	}
	int z = 1,j = n;
	while (z <= j){
		if(c[z] != c[j]){
			if (a[z] > a[j]){
				a[z] -= a[j];
				ans += a[j];
				j--;
			} 
			else if (a[z] < a[j]){
				a[j] -= a[z];
				ans += a[z];
				z++;
			}
			else if (a[z] == a[j]){
				ans += a[z];
				z++;
				j--;
			}
		} 
		else{
			if (a[z] > a[j]){
				a[z] -= a[j];
				j--;
			}
			else if (a[z] < a[j]){
				a[j] -= a[z];
				z++;
			}
			else if (a[z] == a[j]){
				z++;
				j--;
			}
		}
	}
	cout << ans;
	return 0;
}
