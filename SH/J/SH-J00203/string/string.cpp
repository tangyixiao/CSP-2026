#include<bits/stdc++.h>
using namespace std;
long long a[200001];
char c[200001];
bool f[200001];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long s = 0, m = 0;
	string k;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%lld %c", &a[i], &c[i]);
		m += a[i];
	}
	if(m<=100000000){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < a[i]; j++){
				k += c[i];
			}
		}
		n = k.size();
		for(int i = 0; i < n/2; i++){
			if(k[i]!=k[n-i-1])s++;
		}
		printf("%lld", s);
		return 0;
	}
	for(int i = 1; i < n; i++){
		if(c[i]==c[i-1]){
			a[i-1] += a[i];
			i--;
			n--;
		}
	}
	for(int i = 0, j = n-1; i < n; i++){
		if(f[i])continue;
		if(i==j)break;
		f[i] = 1;
		f[j] = 1;
		if(c[i]!=c[j]){
			s += min(a[i], a[j]);
			if(a[i]>a[j]){
				while(a[i]>=a[j]&&i<j&&a[i]>0){
					a[i] -= a[j];
					f[j] = 1;
					j--;
				}
				if(i==j)break;
				if(a[i]>0){
					s += a[i];
					a[j] -= a[i];
				}
			}
			else j--;
			continue;
		}
		while(a[i]>a[j]&&i<j-1&&a[i]>0){
			a[i] -= a[j];
			j--;
			f[j] = 1;
			if(c[i]!=c[j]){
				s += min(a[i], a[j]);
				if(a[i]>a[j]){
					while(a[i]>=a[j]&&i<j&&a[i]>0){
						a[i] -= a[j];
						f[j] = 1;
						j--;
					}
					if(i==j)break;
					if(a[i]>0){
						s += a[i];
						a[j] -= a[i];
					}
				}
			}
			else j--;
			continue;
		}
		j--;
	}
	printf("%lld", s);
	return 0;
}
