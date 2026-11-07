#include<iostream>
#include<cstdio>
#define ull unsigned long long
using namespace std;
ull n, a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	ull sum=0;
	for(int i=1; i<=n; i++){
		cin >> a[i] >> c[i];
	}
	ull cnt=0, l=1, r=n;
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]==a[r]){
				cnt+=a[l];
				l++;
				r--;
				continue;
			}else{
				if(a[l]<a[r]){
					cnt+=a[l];
					a[r]-=a[l];
					l++;
					continue;
				}else{
					cnt+=a[r];
					a[l]-=a[r];
					r--;
				}
			}
		}else{
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}else{
				a[l]-=a[r];
				r--;
			}
		}
	}
	cout << cnt;
	return 0;
}