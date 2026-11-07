#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],t[1048580][25],cnt = 1,sum,yes[1048580],ans,ansf = 1,mx = 0,mmxx = 0,anss,ansss = 0,anssss,anssssmx;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for (int i = 0;i <= 1048578;i++){
		for (int j = 0;j <= 23;j++){
			t[i][j] = 0;
		}
	}
	cin>>n>>m;
	for (int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
		anss &= a[i];
		if (i == 1){
			anss = a[1];
		}
		mmxx = max(mmxx,a[i]);
	}
	if (n <= 20){
		for (int i = 1;i <= n;i++){
			cnt *= 2;
		} 
		for (int i = 1;i < cnt;i++){
			for (int j = 1;j <= n;j++){
				t[i][j] = t[i - 1][j];
			}
			t[i][n]++;
			for (int j = n;j >= 1;j--){
				if (t[i][j] == 2){
					t[i][j] = 0;
					t[i][j - 1]++;
				}
			}
			sum = 0;
			for (int j = 1;j <= n;j++){
				if (t[i][j] == 1){
					sum++;
				}
			}
			if(sum == m){
				yes[i] = 1;
			}
		}
		for (int i = 1;i < cnt;i++){
			ans = 0;
			ansf = 1;
			if (yes[i]){
				for (int j = 1;j <= n;j++){
					if (t[i][j]){
						if (ansf){
							ans = a[j];
							ansf = 0;
						}
						else {
							ans &= a[j];
						}
					}
				}
			}
			mx = max(mx,ans);
		}
		cout<<mx;
		return 0;
	}
	if (m == 1){
		cout<<mmxx;
		return 0;
	}
	if (n == m){
		cout<<anss;
		return 0;
	}
	if (m == 2){
		for (int i = 1;i <= n;i++){
			for (int j = 1;j <= n;j++){
				if (i != j){
					ansss = max(ansss,a[i] & a[j]);
				}
			}
		}
		cout<<ansss;
		return 0;
	}
	if (m == n - 1){
		for (int i = 1;i <= n;i++){
			if (i == 1){
				anssss = a[2];
			}
			else {
				anssss = a[1];
			}
			for (int j = 1;j <= n;j++){
				if (j != i){
					anssss &= a[j];
				}
			}
			anssssmx = max(anssssmx,anssss);
		}
		cout<<anssssmx;
		return 0;
	}
	cout<<0;
	return 0;
}
