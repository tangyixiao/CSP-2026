#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
long long n,a[N],now;
char c[N];
long long ans,f,s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i<=n;++i){
		cin >> a[i] >> c[i];
		s += a[i];
	}
	s /= 2;
	now = n;
	for(int i = 1;i<=n;++i){
		if(a[i] > a[now]){
			while(a[i] > a[now]){
				if(c[i] != c[now]){
					ans += a[now];
				}
				a[i]-=a[now];
				now--;
			}
			if(i == now){
				break;
			}
		}
		if(a[i] == a[now]){
			if(c[i] != c[now]){
				ans += a[i];
			}
			if(i == now){
				break;
			}
			now--;
			if(i == now){
				break;
			}
		}
		else if(a[i] < a[now]){
			if(c[i] != c[now]){
				ans += a[i];
			}
			a[now] -= a[i];
		}
	}
	cout << ans;
	return 0;
}
