#include<bits/stdc++.h>
using namespace std;
long long a[2000005],sum = 0;
char b[2000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,l,r;
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i] >> b[i];
	}
	l = 1;
	r = n;
	while(l < r){
		if (b[l] != b[r]){
			if (a[l] > a[r]){
				sum += a[r];
				a[l] -= a[r];
				r--;
			}
			else if (a[l] == a[r]){
				sum += a[l];
				l++;
				r--;
			}
			else{
				sum += a[l];
				a[r] -= a[l];
				l++;
			}
		}
		else{
			if (a[l] > a[r]){
				a[l] -= a[r];
				r--;
			}
			else if (a[l] == a[r]){
				l++;
				r--;
			}
			else{
				a[r] -= a[l];
				l++;
			}
		}
	}
	cout << sum;
	return 0;
}