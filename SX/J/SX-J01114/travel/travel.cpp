#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a[17];
	int i;
	int ans = 0;
	cin >> i;
	for(int i = 0;i < 17;i++){
		ans = max(ans,a[i]+a[(i+1)%17]+a[(i+2)%17]+a[(i+3)%17]);
    }
    fclose(stdin);
    fclose(stdout);
    cout << ans;
    return 0;
}