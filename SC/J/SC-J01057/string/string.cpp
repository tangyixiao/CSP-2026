#include<bits/stdc++.h>
using namespace std;
//免费打开检查一下
//int给为longlong一下

struct dian{
	string z;
	long long s;
}a[200005];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
//	if(n<=10){
//		string s;
//		for(long long i=1;i<=n;i++){
//			long long x;
//			cin >> x;
//			string c;
//			cin >> c;
//			for(long long j=1;j<=x;j++){
//				s = s + c;
//			}
//		}
//		long long ans=0;
//		for(long long i=0;i<s.size()/2;i++){
//			if(s[i]!=s[s.size()-i-1]){
//				ans++;
//			}
//		}
//		cout << ans;
//	}
//	else{
	for(long long i=1;i<=n;i++){
		long long x;
		cin >> x;
		string c;
		cin >> c;
		a[i].s = x;
		a[i].z = c;
	}
	long long ans=0,l=1,r=n;
	while(l<r){
		long long minj = min(a[l].s,a[r].s);
		if(a[l].z == a[r].z){
			a[l].s -= minj;
			a[r].s -= minj;
			if(a[l].s == 0){
				l++;
			}
			if(a[r].s == 0){
				r--;
			}
		}
		else{
			ans+=min(a[l].s,a[r].s);
			a[l].s -= minj;
			a[r].s -= minj;
			if(a[l].s == 0){
				l++;
			}
			if(a[r].s == 0){
				r--;
			}
		}
	}
	cout << ans;
//	}
	return 0;
}
/*
5
2 a
1 d
1 a
3 c
4 a

*/