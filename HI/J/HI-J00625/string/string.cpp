#include<bits/stdc++.h>
using namespace std;
const int N = 1e9 + 10;
long long n, sum, ant;
long long a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		cin >> c[i];
	}
	for(int i = 1;i <= n;i++){
		if(c[i] == c[i-1]){
			sum++;
		}
	}
	if(sum == n){
		cout << 0;
		return 0;
	}
	for(int i = 1;i <= n;i++){
		if(a[i] == a[i-1]){
			ant++;
		}
	}
	if(ant == n){
		cout << a[n]*(n/2);
		return 0;
	}
	return 0;
}
