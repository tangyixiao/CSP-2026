#include<bits/stdc++.h>
using namespace std;
int a[10000001],b[10000001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin >> n >> m;
	for ( int i = 1;i <= n;i++ ){
		cin >> a[i];
	}
	int maxn = 262143,minn = a[1],d = 0;
	while (m--){
		int maxnn = 0,r;
		for ( int i = 1;i <= n;i++ ){
 			if ( maxnn < a[i] ){
 				bool t = true;
 				for ( int j = 1;j <= d;j++ ){
 					if ( b[j] == a[i] ){
 						t = false;
 						break;
					 }
				}
				if ( t == true ){
					r = i;
 					maxnn = a[i];
				}
			}
		}
		maxn = maxn & maxnn;
		d++;
		b[d] = a[r];
	}
	cout << maxn;
	return 0;
}
