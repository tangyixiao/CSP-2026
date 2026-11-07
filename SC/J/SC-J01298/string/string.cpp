#include<iostream>
#define int long long
using namespace std;
char a[2000005];
int l[2000005];
int ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; cin >> n;
	for(int i=1;i<=n;++i){
		cin >> l[i];
		cin >> a[i];
	}
	int i=1,j=n;
	while(i <= j){
		if(l[i] == l[j]){
			if(a[i] != a[j]){
				ans += l[i];
			}
				
			++i,--j;
		}
		else if(l[i] > l[j]){
			l[i] -= l[j];
			if(a[i] != a[j]){
				ans += l[j];
			}
				
			--j;
		}else if(l[j] > l[i]){
			l[j] -= l[i];
			if(a[i] != a[j]){
				ans += l[i];
			}
				
			++i;
		}
//		cout << i << ' ' << j << '\n';
//		cout << ans << ' ';
	}
	cout << ans;
	return 0;
}
