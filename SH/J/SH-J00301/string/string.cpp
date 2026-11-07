#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
int a[maxn];
char c[maxn];
char b[maxn];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for(int i = 0; i <= maxn; i++) {
		for(int j = 1; j <= a[i]; j++) {
			b[j] = c[i];//cout << b[j];
		}
		for(int j = 1;j <= a[i];j++){
			if(b[j] != b[n+1-j]) {
			    
				break;cout << "0";
			} else {
				
				break;
			}
		}
	}
	int ans = 0;
	int len;
	for(int i = 0;i <= n;i++){
		len += a[i];
	}
	if(len%2 == 0) {
		for(int i = 1; i <= n; i++) {
            if(a[i] != a[n-i]){
            	ans ++;
			}
		}
	}
	else{
		for(int i = 1;i <= n;i++){
			if(a[i] != a[n+1-i]){
				ans++;
			}
		}
	}
	if(false){
		cout << 0;
	}else{
		cout << ans;
	}
	
	return 0;
}
