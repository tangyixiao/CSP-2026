#include<bits/stdc++.h>
using namespace std;
int a[200001];
char s[200001];
int main() {
	long long ans = 0;
	int cnt = 0;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum = 0;
	scanf("%d",&n);
	for(int i = 1 ; i <= n; i++){
		cin >> a[i] >> s[i];
	}
	for(int i = 1 ; i <= n; i++){
		cnt += a[i];
	}
	long long i = 1, j = n;
	cnt /= 2;
	while(1) {
		if(s[i] == s[j]) {
			if(a[i] > a[j]) {
				a[i]-=a[j];
				cnt-=a[j];
				a[j] = 0;
				j--;
				continue;
			} else if(a[i]<a[j]) {
				a[j]-=a[i];
				cnt-=a[i];
				a[i] = 0;
				i--;
			} else {
				a[i]=0;
				a[j]=0;
				cnt -= a[i];
				i--;
				j--;
				continue;
			}
			if(cnt <= 0) {
				break;
			}
		} else {
			if(a[i] > a[j]) {
				a[i]-=a[j];
				cnt-=a[j];
				ans += a[j];
				a[j] = 0;
				j--;
				continue;
			} else if(a[i]<a[j]) {
				a[j]-=a[i];
				cnt-=a[i];
				ans+=a[i];
				a[i] = 0;
				i--;
			} else {
				a[i]=0;
				a[j]=0;
				cnt -= a[i];
				ans+=a[i];
				i--;
				j--;
				continue;
			}
			if(cnt <= 0) {
				long long sum = 0-cnt;
				ans -= sum;
				break;
			}
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

