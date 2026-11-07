#include<bits/stdc++.h>
using namespace std;
	freopen("string.in","r",stdin)
	freopen("string.out","w",stoudt)
int a[1000005];
int c[1000005];
int ans = 0;
int main(){
	int n,m;
	cin >> n >> m;
	for(int i=1;i <= n;i++){
		cin >> a[i];
		ans++;
	}
	for(int j=0;j < m;j--){
		ans--;	
	}

	
	cout << ans;
	
	return 0;
	
}
	fclose(stdin)
	fclose(stdout)
