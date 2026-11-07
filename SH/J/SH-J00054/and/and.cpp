#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN = 2e5 + 10;
typedef unsigned long long ull;

int n,m;
ull a[MAXN];
ull ans1 = 0;
ull ans2 = 0;
ull ans3 = 0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		ans1 = max(ans1,a[i]);
	}
	ans2 = a[1];
	for(int i = 2;i <= n;i++){
		ans2 = ans2 & a[i];
	}
	ans3 = a[1] & a[2];
	
	if(m == 1){
		cout << ans1;
	}else if(m == n){
		cout << ans2;
	}else if(m == 2){
		for(int i = 1;i <= n;i++){
			for(int j = i + 1;j <= n;j++){
				ans3 = max(ans3,a[i] & a[j]);
			}
		}
		cout << ans3;
	}
	
	return 0;
}
