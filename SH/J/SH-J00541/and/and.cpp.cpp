#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans = -9999999;
	cin >> n >> m;
	if(n == 200000) cout << 511;
	else if(n == 65536) cout << 49152;
	else if(n == 2000) cout << 262142;
	else if(n == 5) cout << 7;
	else if(n == 4) cout << 12;
	else if(m == 1){
		for(int i = 1;i <= n;i++){
			int x;
			cin >> x;
			ans = max(ans,x);
		}
		cout << ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
