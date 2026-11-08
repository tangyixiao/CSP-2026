#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 5;
int n;
int a[N];
char c[N];
ll cnt = 0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
	}
	ll l = 1,r = n;
	while(l <= r){
		int x = a[l],y = a[r];
		char e = c[l],t = c[r];
		if(e == t){
			if(x < y){
				l++;
				a[r] -= x;
			}
			else if(x > y){
				r--;
				a[l] -= y;
			}
			else{
				l++,r--;
			}
		}
		else{
			if(x < y){
				cnt += x;
				l++;
				a[r] -= x;
			}
			else if(x > y){
				cnt += y;
				r--;
				a[l] -= y;
			}
			else{
				cnt += x;
				l++,r--;
			}
		}
	}
	cout << cnt;
	return 0;
}
