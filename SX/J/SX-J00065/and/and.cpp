#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define ull unsigned long long
#define ve vector<int, int>
using namespace std;
const int N = 1e8 + 10;
const int INF = 0x3f3f3f3f;
//const int MOD = ;
int a[N];
int n, m;
void solve() {
	cin >> n >> m;
	int mx=0;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	if (n == m) {
		int sum = a[1];
		for(int i = 2; i <= n; i ++) {
			sum &= a[i];
		}
		cout << sum;
	}
	if (m == 1) {
		cout << mx;
	}
	if (m==2) {
		int mx=0;
		for (int i = 1;i<n;i ++){
			int sum = a[i];
			for (int j = i + 1;j<=n;j++){
				sum &= a[j];
				mx = max(mx,sum);
				sum = a[i];
			}
		}
		cout <<mx;
	}
	if (m==3) {
		int mx=0;
		for (int i = 1;i<n-1;i ++){
			int sum = a[i];
			for (int j = i + 1;j<n;j++){
				sum &= a[j];
				int sum1=sum;
				for (int q=j+1;q<=n;q++) {
					sum1&=a[q];
					mx = max(mx,sum1);
					sum1=sum;
				}
				sum=a[i];
			}
		}
		cout <<mx;
	}
	if (m==4) {
		int mx=0;
		for (int i = 1;i<n-2;i ++){
			int sum = a[i];//sum=1;
			for (int j = i + 1;j<n-1;j++){
				sum &= a[j];
				int sum1 = sum;//sum1=1+2;
				for(int q=j+1;q<n;q++){
					sum1&=a[q];
					int sum2=sum1;//sum2=1+2+3;
					for(int w=q+1;w<=n;w++){
						sum2&=a[w];
						mx = max(mx,sum2);
						sum2=sum1;
					}
					sum1=sum;
				}
				sum=a[i];
			}
		}
		cout <<mx;
	}
	if (m==5) {
		int mx=0;
		for (int i = 1;i<n-3;i ++){
			int sum = a[i];
			for (int j = i + 1;j<n-2;j++){

				sum &= a[j];
				int sum1 = sum;
				for(int q=j+1;q<n-1;q++){
					sum1&=a[q];
					int sum2=sum1;
					for(int w=q+1;w<n;w++){

						sum2&=a[w];
						int sum3=sum2;
						for(int r=w+1;r<=n;r++){
							sum3&=a[r];
							mx = max(mx,sum3);
							sum3=sum2;
						}
						sum2=sum1;
					}
					sum1=sum;
				}
				sum=a[i];
			}
		}
		cout <<mx;
	}
	if (m==6) {
		int mx=0;
		for (int i = 1;i<n-4;i ++){
			int sum = a[i];
			for (int j = i + 1;j<=n-3;j++){
				sum &= a[j];
				int sum1=sum;
				for(int q=j+1;q<n-2;q++){
					sum1&=a[q];
					int sum2=sum1;
					for(int w=q+1;w<n-1;w++){
						sum2&=a[w];
						int sum3=sum2;
						for(int r=w+1;r<n;r++){
							sum3&=a[r];
							int sum4=sum3;
							for(int y=r+1;y<=n;y++){
								sum4&=a[y];
								mx=max(mx,sum4);
								sum4=sum3;
							}
							sum3=sum2;
						}
						sum2=sum1;
					}
					sum1=sum;
				}
				sum=a[i];
			}
		}
		cout <<mx;
	}
	if (m==7) {
		int mx=0;
		for (int i = 1;i<n-5;i ++){
			int sum = a[i];
			for (int j = i + 1;j<n-4;j++){
				sum &= a[j];
				int sum1=sum;
				for(int q=j+1;q<n-3;q++){
					sum1&=a[q];
					int sum2=sum1;
					for(int w=q+1;w<n-2;w++){
						sum2&=a[w];
						int sum3=sum2;
						for(int r=w+1;r<n-1;r++){
							sum3&=a[r];
							int sum4=sum3;
							for(int y=r+1;y<n;y++){
								sum4&=a[y];
								int sum5=sum4;
								for(int p=y+1;p<=n;p++){
									sum5&=a[p];
									mx=max(mx,sum5);
									sum5=sum4;
								}
								sum4=sum3;
							}
							sum3=sum2;
						}
						sum2=sum1;
					}
					sum1=sum;
				}
				sum=a[i];
			}
		}
		cout <<mx;
	}
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int t = 1;
//	cin >> t;
	while (t --) {
		solve();
	}
	return 0;
}