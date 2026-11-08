#include <bits/stdc++.h>
using namespace std;
int m,n;
long long a[200001],b,ans;
int main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	if (m==1){
		sort (a+1,a+n+1);
		cout << a[n];
	}
	else if (m==2){
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				b=(a[i]&a[j]);
				ans=max(ans,b);
			}
		}
		cout << ans;
	}
	else if (m==n){
		b=a[1];
		for (int i=2;i<=n;i++){
			b=(b&a[i]); 
		}
		cout << b;
	}
	return 0;
}
