#include <bits/stdc++.h>//AC 
using namespace std;
const long long M=2e5+5; 
long long n;
long long a[M];
char c[M];
long long cnt;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long l=1,r=n;
	while(l<=r){
//		cout<<l<<" "<<r<<endl;
		long long mi=min(a[l],a[r]);
		if(c[l]!=c[r]){
			cnt+=mi;
		}
		a[l]-=mi;
		a[r]-=mi;
		if(a[l]<=0){
			l++;
		}
		if(a[r]<=0){
			r--;
		}
	}
	cout<<cnt;
	return 0;
}
/*
3
2 a
2 b
1 c
*/
/*
双指针向内扫描 :
l=1,r=n;
每次：
1.判相等
2.减a[i] 
*/
