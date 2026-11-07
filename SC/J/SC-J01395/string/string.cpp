#include<bits/stdc++.h>
#define int long long
using namespace std;
char c[200005];
int nums[200005];
signed main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;cin >> n;
	for(int i = 1;i <= n;i++) cin >> nums[i] >> c[i];
	//for(int i = 1;i <= n;i++) cout << c[i] << " ";
	//cout << "\n";
	int p1 = 1 , p2 = n , ans = 0;
	while(p1 < p2){
		//cout << p1 << " " << p2 << " " << ans << "\n";
		if(c[p1] == c[p2]){
			if(nums[p1] < nums[p2]){
				nums[p2] -= nums[p1];
				p1++;
			}
			else if(nums[p1] > nums[p2]){
				nums[p1] -= nums[p2];
				p2--;
			}
			else p1++ , p2--;
		}
		else{
			if(nums[p1] < nums[p2]){
				ans += nums[p1];
				nums[p2] -= nums[p1];
				p1++;
			}
			else if(nums[p1] > nums[p2]){
				ans += nums[p2];
				nums[p1] -= nums[p2];
				p2--;
			}
			else{
				ans += nums[p1];
				p1++ , p2--;
			}
		}
		//cout << p1 << " " << p2 << " " << ans << "\n";
	}
	cout << ans << "\n";
}