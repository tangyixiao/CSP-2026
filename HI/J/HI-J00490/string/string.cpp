#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], cnt, cha;
char c[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
	}
	for(int i = 1;i <= n/2 + n%2;i++){
		if(cha==0){
			if(c[i]!=c[n+-1-i]){
				if(a[i] >= a[n+1-i]){
					cnt+=a[n+1-i];
					cha = a[i] - a[n+1-i];
				}
				else{
					cnt+=a[i];
					cha = a[i] - a[n+1-i];
				}
			}
			else{
				cha = a[i] - a[n+1-i];
			}
		}
		else{
			if(cha > 0){
				if(c[n+1-i] != c[i-1]){
					if(cha <= a[n+1-i]){
						a[n+1-i]-=cha;
						cnt += cha;
						cha = 0;
					}
					else{
						cnt += a[n+1-i];
						cha -= a[n+1-i]; 
					}
					if(c[i]!=c[n+-1-i]){
						if(a[i] >= a[n+1-i]){
							cnt+=a[n+1-i];
							cha = a[i] - a[n+1-i];
						}
						else{
							cnt+=a[i];
							cha = a[i] - a[n+1-i];
						}
					}
					else{
						cha = a[i] - a[n+1-i];
					}
				}
				else{
					if(cha <= a[n+1-i]){
						a[n+1-i]-=cha;
						cha = 0;
					}
					else{
						cha -= a[n+1-i]; 
					}
				}
			}
		}
	}
	cout << cnt;
	
	return 0;
}

