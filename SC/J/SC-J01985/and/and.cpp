#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	freopen("and.in", "r", stdin);
    freopen("and.out","w", stdout);
	
	int n, m;
	cin >> n >> m;
	vector<int>arr(n+1, 0);
	for(int i=1;i<=n;i++)cin >> arr[i];
	
	
	vector<bool>bit(32, false);
	vector<bool>choice(n+1, true);
	for(int i=29;i>=0;i--){
		int cnt = 0;
		for(int j = 1;j<=n;j++){
			bitset<31>bits = arr[j];
			if(choice[j] && bits.test(i)==1)
				cnt++;
		}
		if(cnt >= m){
			bit[i]=true;
			for(int j = 1;j<=n;j++){
				bitset<31>bits = arr[j];
				if(choice[j] && bits.test(i)==0)
					choice[j] = false;
			}
		}
	}
	
	int ans = 0, exp = 1;
	for(int i=0;i<=29;i++){
		if(bit[i])ans+=exp;
		exp<<=1;
	}
	
	cout << ans << '\n';
	
	return 0;
}
