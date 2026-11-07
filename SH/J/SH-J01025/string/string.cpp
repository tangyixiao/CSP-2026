#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
char b[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i] >> b[i];
	}
	int i = 0, j = n - 1;
	long long sum = 0;
	while(i < j){
		if(a[i] < a[j]){
			if(b[i] != b[j]){
				sum += a[i];
			}
			a[j] -= a[i];
			a[i] = 0;
			i++;	
		}else{
			if(b[i] != b[j]){
				sum += a[j];
			}
			a[i] -= a[j];
			a[j] = 0;
			j--;
		}
	}
	cout << sum;
	return 0;
}
