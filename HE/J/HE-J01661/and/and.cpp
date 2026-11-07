#include<bits/stdc++.h>
using namespace std;
struct bint{
	short nums[40];
};
bint nums1[200500];
bool numf[200500];
void cary(bint &it){
	for(int i = 0; i < 40; i ++){
		if(it.nums[i]>1){
			it.nums[i + 1] += it.nums[i] >> 1;
			it.nums[i] &= 1;
		}
	}
}
int main(){
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		numf[i] = 0;
		long long num;
		cin >> num;
		for(int j = 0; j <= 39; j++){
			nums1[i].nums[j] = num & 1;
			num >>= 1;               
		}
	}
	bool flag = 0;
	int cnt = n;
	long long ans = 0;
	for(int i = 39; i >= 0; i --){
		for(int j = 1; j <= n; j ++){
			if(nums1[j].nums[i] == 1){
				flag = 1;
			}
		}
		if(flag == 1){
			int dlt = 0;
			for(int j = 1; j <= n; j ++){
				if(nums1[j].nums[i] == 0 && numf[j] == 0){
					cnt --;
					dlt ++;
				}
			}
			if(cnt < m){
				ans <<= 1;
				cnt += dlt;
			}else{
				ans <<= 1;
				ans += 1;
				for(int j = 1; j <= n; j ++){
					if(nums1[j].nums[i] == 0){
						numf[j] = 1;
					}
				}
			}
		}
	}
	cout << ans;
	return 0;
}
