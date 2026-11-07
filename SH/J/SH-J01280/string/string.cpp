#include<bits/stdc++.h> 

using namespace std;

int n;
int a[200005];
long long b[200005];
char c[200005]; 
long long v, ans;;
int lt, rt;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> a[i] >> c[i];
		b[i] = b[i - 1] + a[i];
	}
	
	rt = n;
	lt = 1;
	v = 1;
	
	
	while(v * 2 <= b[n]){
		if(c[lt] != c[rt]){
			ans ++;
		}
		v++;
		if(v > b[lt]){
			lt ++;
		} 
		if(b[n] - v + 1 <= b[rt - 1]){
			rt --;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
