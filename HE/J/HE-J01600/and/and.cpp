#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long a[N];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n;
	cin>>m>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int maxx=-1e9;
	for(int i=0; i<n; i++){
		int k=a[i], l=i;
		for(int j=0; j<n; j++){
			if(k!=a[l]){
				for(int p=0; p<a[l]; p++){
					if(a[l]!=0){
						k=k|a[l];
					}
					k>>1, a[l]>>1;
				}
			}
			l++;
		}
		maxx=max(maxx, k);
	}
	cout<<maxx;
	return 0;
}
