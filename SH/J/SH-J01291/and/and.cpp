#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],sum,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		if (a[i]==a[i-1]){
			continue;
		}
		for(int j=i+1;j<=n;j++){
			if (a[j]==a[j-1]&&j!=i+1){
				continue;
			}
			sum=a[i]&a[j];
			if (ans<sum){
				ans=sum;
			}
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
