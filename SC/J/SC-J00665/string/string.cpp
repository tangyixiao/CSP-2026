#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
int n;
char c[N];
ll len,ans,a[N];
bool iff(ll w){
	if (w > len / 2) return true;
	else return false;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for (int i = 1; i <= n; i++){
		scanf("%lld",&a[i]);
		cin >> c[i];
		len += a[i];
	}
	int l = 1,r = n;
	ll k = 0;
	for (int i = 1; i <= n; i++){
		if (l == r) break;
		if (c[l] == c[r]){
			int temp = a[l] - a[r];
			if (temp > 0){
				if (!iff(k + a[r])) k += a[r];
				else break;
				r--;
				a[l] = temp;
			}
			else if (temp < 0){
				if (!iff(k + a[l])) k += a[l];
				else break;
				l++;
				a[r] = temp;
			}
			else{
				if (!iff(k + a[l])) k += a[l];
				else break;
				l++;
				if (l == r) break;
				r--; 
			}
		}
		else{
			int temp = a[l] - a[r];
			if (temp > 0){
				if (!iff(k + a[r])) k += a[r];
				else break;
				ans += a[r];
				r--;
				a[l] = temp;
			}
			else if (temp < 0){
				if (!iff(k + a[l])) k += a[l];
				else break;
				ans += a[l];
				l++;
				a[r] = temp;
			}
			else{
				if (!iff(k + a[l])) k += a[l];
				else break;
				ans += a[l];
				l++;
				if (l == r) break;
				r--; 
			}
		}
	}
	printf("%lld",ans);
	return 0;
}