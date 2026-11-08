#include<bits/stdc++.h>
using namespace std;
long long n,b = 0;
long long a[200005],sum,sum2;
char c[200005],s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(long long i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		if(i == 1){
			sum = a[i];
		}else{
			sum = __gcd(sum,a[i]);
		}
	}
	for(long long j = 1;j <= n;j++){
		a[j] /= sum;
		for(int i = 1;i <= a[j];i++){
			s[b] = c[j];
			b++;	
		}
	}
	if(b % 2 == 1){
		for(int i = 0;i < b / 2 + 1;i++){
			if(s[i] != s[b - i - 1]){
				sum2++;
			}
		}
	}else{
		for(int i = 0;i <= b / 2 - 1;i++){
			if(s[i] != s[b - i - 1]){
				sum2++;
			}
		}
	}
	cout << sum2 * sum;
	return 0;
}
