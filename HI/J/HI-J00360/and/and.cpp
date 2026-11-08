#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const ll MAXN = 2e5 + 7;
int sum[31] = {}, s[31] = {}, n, m;
ll ans = 0;

struct x_num{
	int a;
	bool x[31] = {}, tag = 0;
	void init(){
		int k = 0, b = a;
		while(b != 0){
			x[k++] = b & 1;
			b = b >> 1;
		}
	}
}arr[MAXN];

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> arr[i].a;
		arr[i].init();
	}
	for(int i = 30; i >= 0; i--){
		for(int j = 1; j <= n; j++){
			if(arr[j].tag == 0 && arr[j].x[i] == 1)
				++ sum[i];
		}
		if(sum[i] > m){
			for(int k = 1; k <= n; k++){
				if(arr[k].tag == 0 && arr[k].x[i] == 0)
					arr[k].tag = 1;
			}
			s[i] = 1;
		} else if(sum[i] == m) s[i] = 1;
	}
	for(int i = 30; i >= 0; i--) ans = (ans << 1) + s[i];
	cout << ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
