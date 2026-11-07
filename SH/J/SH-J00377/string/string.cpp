#include<bits/stdc++.h>
#define int long long

using namespace std;

int a[100010];
char c[100010];
int cnt = 0;
int ans;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int N;
	cin >> N;
	for(int i = 1; i <= N; ++i){
		int a2;
		char c2;
		cin >> a2 >> c2;
		if(c2 == c[cnt]){
			a[cnt] += a2;
		}
		else{
			cnt++;
			a[cnt] = a2;
			c[cnt] = c2;
		}
	}
	int cnt3 = 0;
	int cnt2 = cnt;
	for(int i = 1; i <= cnt2;){
		if(a[i] == 0 || ((cnt2 % 2 == 1) && (i + i - 1 == cnt2))){
			i++;
			continue;
		}
		int b;
		b = abs(cnt + 1 - i);
		if(i + i - 1 > cnt){
			while(a[b] == 0 && b > 1){
				b--;
			}
			if(a[b] == 0){
				while(a[b] == 0 && b <= i){
					b++;
				}
			}
		}
		else{
			while(a[b] == 0 && b < cnt){
				b++;
			}
			if(a[b] == 0){
				while(a[b] == 0 && b >= i){
					b--;
				}
			}
		}
		if(c[i] != c[b]){
			if(a[b] > a[i]){
				a[b] -= a[i];
				ans += a[i];
				a[i] = 0;
				i++;
			}
			else if(a[b] == a[i]){
				ans += a[i];
				a[i] = 0;
				a[b] = 0;
				i++;
			}
			else{
				a[i] -= a[b];
				ans += a[b];
				a[b] = 0;
			}
		}
		else{
			if(a[b] > a[i]) {
				a[b] -= a[i];
				a[i] = 0;
				i++;
			}
			else if(a[b] == a[i]){
				a[i] = 0;
				a[b] = 0;
				cnt3--;
				i++;
			}
			else{
				a[i] -= a[b];
				a[b] = 0;
			}
		}
		if(a[cnt2] == 0){
			cnt--;
		}
	}
	cout << ans;
	return 0;
}
