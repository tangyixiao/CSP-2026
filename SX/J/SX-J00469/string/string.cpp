#include <bits/stdc++.h>
using namespace std;
long long sum = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;


	string b;
	for (long long i = 1; i <= n; i++) {
		long long x;
		char s;
		cin >> x >> s;
		for (long long j = 1; j <= x; j++)
			b += s;
	}
	long long ans = 0;
	long long c = 0;
	int l = 0;
	int r = b.size() - 1;
	while (l < r) {
		if (b[l] != b[r])
			ans++;
		l++;
		r--;
	}
	cout << ans;
//	int l=1,r=a[n].x;qk=r;
//	long long ans=0;
//	while(l<r){
//		cha=0;int t=0;
//		if(a[l].x<a[r].x){
//			char=a[r].x-a[l].x;
//			ans+=char
//			for(int j=l+1;j<=n;j++){
//				if(t>=cha){
//					break;ans+=char;r--;a[l-j+1].x=t-a[l].x
//				}
//				else t+=a[j].x;
//			}
//		}
//
//	}


}
