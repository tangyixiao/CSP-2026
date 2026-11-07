#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin >> n >> m;
	cin >> a[1];ans = a[1];
	if (m == 1)for (int i = 2;i <= n;i++){cin >> a[i];ans = max(a[i],ans);}
	if (m == n)for (int i = 2;i <= n;i++){cin >> a[i];ans &= a[i];}
	else {
		for (int i = 2;i <= n;i++) cin >> a[i];
		sort(a+1,a+n+1);
		for (int i = 1;i <= n-m+1;i++){
			int c = a[i];
			for (int j = i+1;j <= i+m-1;j++) c &= a[i];
			ans = max(ans,c);
		}			
	}
	cout << ans;
} 
