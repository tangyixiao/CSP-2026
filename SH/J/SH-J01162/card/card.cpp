#include<bits/stdc++.h>
using namespace std;
long long n, m, sum = -1;
const int maxn = 1e6+10;
long long a[maxn], b[maxn], c[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(long long i = 0;i < n;i++){
		cin >> a[i];
	}
	while(1){
		sum++;
		for(long long i = sum;i < n;i++){
			c[i] = a[i];
			for(long long j = sum;j < i;j++){
				if(a[i] == c[j]){
					for(long long z = j;z < i;z++){
						c[z] = 0;
					}
					break;
				}
			}
		}
		for(long long i = sum;i < n;i++){
			b[c[i]]++;
		}
		if(sum == n-1){
			break;
		}
	}
	for(long long i = 1;i <= m;i++){
		cout << b[i] << " ";
	}
	return 0;
}
