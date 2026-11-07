#include<bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == n) {
		long long num = a[1];
		for (int i = 2; i <= n; i++) {
			num &= a[i];
		}
		cout << num;
		return 0;
	}
	if (m == 1) {
		long long ans = -1e9;
		for (int i = 1; i <= n; i++) {
			if (a[i] > ans) {
				ans = a[i];
			}
		}
		cout << ans;
		return 0;
	}
	if (m == 2) {
		long long ans = -1e9;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				long long num = a[i] & a[j];
				if (num > ans) {
					ans = num;
				}
			}
		}
		cout << ans;
		return 0;
	}
	if (m == 3) {
		long long ans = -1e9;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int l = j + 1; l <= n; l++) {
					long long num = a[i] & a[j] & a[l];
					if (num > ans) {
						ans = num;
					}
				}
			}
		}
		cout << ans;
		return 0;
	}
	if (m == 4) {
		long long ans = -1e9;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int l = j + 1; l <= n; l++) {
					for (int k = l + 1; k <= n; k++) {
						long long num = a[i] & a[j] & a[l] & a[k];
						if (num > ans) {
							ans = num;
						}
					}
				}
			}
		}
		cout << ans;
		return 0;
	}
	if (m == 5) {
		long long ans = -1e9;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int l = j + 1; l <= n; l++) {
					for (int k = l + 1; k <= n; k++) {
						for (int h = k + 1; h <= n; h++) {
							long long num=a[i]&a[j]&a[l]&a[k]&a[h];
							if(num>ans){
								ans=num;
							}
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==6){
		long long ans = -1e9;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int l = j + 1; l <= n; l++) {
					for (int k = l + 1; k <= n; k++) {
						for (int h = k + 1; h <= n; h++) {
							for(int g=h+1;g<=n;g++){
								long long num=a[i]&a[j]&a[l]&a[k]&a[h]&a[g];
								if(num>ans){
									ans=num;
								}
							}
							
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==7){
		long long ans = -1e9;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int l = j + 1; l <= n; l++) {
					for (int k = l + 1; k <= n; k++) {
						for (int h = k + 1; h <= n; h++) {
							for(int g=h+1;g<=n;g++){
								for(int p=g+1;p<=n;p++){
									long long num=a[i]&a[j]&a[l]&a[k]&a[h]&a[g]&a[p];
									if(num>ans){
										ans=num;
									}
								}
								
							}
							
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==8){
		long long ans = -1e9;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int l = j + 1; l <= n; l++) {
					for (int k = l + 1; k <= n; k++) {
						for (int h = k + 1; h <= n; h++) {
							for(int g=h+1;g<=n;g++){
								for(int p=g+1;p<=n;p++){
									for(int o=p+1;o<=n;o++){
										long long num=a[i]&a[j]&a[l]&a[k]&a[h]&a[g]&a[p]&a[o];
										if(num>ans){
											ans=num;
										}
									}
									
								}
								
							}
							
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==9){
		long long ans = -1e9;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int l = j + 1; l <= n; l++) {
					for (int k = l + 1; k <= n; k++) {
						for (int h = k + 1; h <= n; h++) {
							for(int g=h+1;g<=n;g++){
								for(int p=g+1;p<=n;p++){
									for(int o=p+1;o<=n;o++){
										for(int u=o+1;u<=n;u++){
											long long num=a[i]&a[j]&a[l]&a[k]&a[h]&a[g]&a[p]&a[o]&a[u];
											if(num>ans){
												ans=num;
											}
										}
										
									}
									
								}
								
							}
							
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==10){
		long long ans = -1e9;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int l = j + 1; l <= n; l++) {
					for (int k = l + 1; k <= n; k++) {
						for (int h = k + 1; h <= n; h++) {
							for(int g=h+1;g<=n;g++){
								for(int p=g+1;p<=n;p++){
									for(int o=p+1;o<=n;o++){
										for(int u=o+1;u<=n;u++){
											for(int y=u+1;y<=n;y++){
												long long num=a[i]&a[j]&a[l]&a[k]&a[h]&a[g]&a[p]&a[o]&a[u]&a[y];
												if(num>ans){
													ans=num;
												}
											}
											
										}
										
									}
									
								}
								
							}
							
						}
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}
	long long g;
	g/=n;
	g+=1;
	cout<<a[g];
	return 0;
}