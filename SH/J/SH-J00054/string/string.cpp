#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
const int MAXN = 2e5 + 10;
typedef long long ll;

int x1,y1;
char c[MAXN];
int a[MAXN];
int n;
ll ans = 0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
	}
	x1 = 1;y1 = n;
	
	while(x1 < y1){
		int t = min(a[x1],a[y1]);
		if(c[x1] != c[y1]){
			ans += t;
		}
		if(a[x1] > a[y1]){
			y1--;
			a[x1] -= t;
		}else if (a[x1] < a[y1]){
			x1++;
			a[y1] -= t;
		}else{
			x1++;
			y1--;
		}
	}
	cout << ans;
	
	return 0;
}
