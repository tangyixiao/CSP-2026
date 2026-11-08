#include<bits/stdc++.h>
using namespace std;
long long a[100001],b[100001];
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	long long n,m;cin >> n >> m;
	for ( long long i = 1;i <= n;i++ ){
		cin >> a[i];
	}
	for ( long long i = 1;i <= n;i++ ){
		long long wei = 1,c[100001] = {};
		for ( long long j = i;j <= n;j++ ){
			c[wei] = a[j];
			for ( long long k = 1;k <= wei-1;k++ ){
				if ( c[k] == c[wei] ){
					for ( long long x = k+1;x <= wei;x++ ){
						c[x] = 0;
					}
					wei = k;
					break; 
				}
			}
			wei++;
		}
		for ( long long j = 1;j <= wei;j++ ){
			b[c[j]]++;
		}
	}
	for ( long long i = 1;i <= m;i++ ){
		cout << b[i] << " ";
	}
	return 0;
}

