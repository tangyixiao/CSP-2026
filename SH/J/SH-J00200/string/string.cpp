#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
int n;
struct s{
	int len;
	char c;
}arr[N];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> arr[i].len >> arr[i].c;
	int l = 1, r = n;
	long long ans = 0;
	while(l < r){
		if(arr[l].c == arr[r].c){
			if(arr[l].len >= arr[r].len){
				arr[l].len -= arr[r].len;
				arr[r].len = 0;
				r--;
			}
			else{
				arr[r].len -= arr[l].len;
				arr[l].len = 0;
				l++;
			}
		}
		else{
			if(arr[l].len >= arr[r].len){
				ans += arr[r].len;
				arr[l].len -= arr[r].len;
				arr[r].len = 0;
				r--;
			}
			else{
				ans += arr[l].len;
				arr[r].len -= arr[l].len;
				arr[l].len = 0;
				l++;
			}
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
