#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10485790];
int mx = INT_MIN;
int cnt = 16777215;
int main(){
	freopen("and3.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		mx = max(mx,a[i]);
		cnt &= a[i];
	}
	if(m == 1)cout << mx;
	if(m == n)cout << cnt;
	if(m == 2){
		mx = INT_MIN;
		cnt = 16777215;
		for(int i = 1;i <= n;i++){
			for(int j = i + 1;j <= n;j++){
				mx = max(mx,a[i] & a[j]);
			}
		}
		cout << mx;
	}
	return 0;
}
