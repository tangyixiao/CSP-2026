#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
struct st{
	int x;
	char c;
}a[200010];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i].x >> a[i].c;
	}
	int l = 1, r = n;
	while(l <= r){
		if(a[l].x > a[r].x){
			if(a[l].c == a[r].c){
				a[l].x -= a[r].x;
				a[r].x = 0;
				r--;
			}else{
				ans += a[r].x;
				a[l].x -= a[r].x;
				a[r].x = 0;
				r--;
			}
		}else if(a[l].x < a[r].x){
			if(a[l].c == a[r].c){
				a[r].x -= a[l].x;
				a[l].x = 0;
				l++;
			}else{
				ans += a[l].x;
				a[r].x -= a[l].x;
				a[l].x = 0;
				l++;
			}
		}else{
			if(a[l].c == a[r].c){
				a[l].x = 0;
				a[r].x = 0;
				l++;
				r--;
			}else{
				ans += a[l].x;
				a[l].x = 0;
				a[r].x = 0;
				l++;
				r--;
			}
		}
	}
	cout << ans;
	return 0;
}