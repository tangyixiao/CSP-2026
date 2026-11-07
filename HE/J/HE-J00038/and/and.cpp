#include <iostream>
#include <cmath>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m,a[100010];
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	int cnt=0,ans=0;
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			int x=a[i]&a[j];
			ans=max(ans,x);
		}
	}
	cout << ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
