#include <bits/stdc++.h>
using namespace std;
int n,m,cshu;
int a[200005],x[200005];
void c(int y[20005]){
	if(cshu==m) return;
	cshu++;
	for(int i=1;i<=n;i++){
		x[i]=(y[i]and c(y)and c(c(y)) );
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		x[i]++; 
	}
	c(a);
	int k=-1;
	for(int i=1;i<n;i++){
		k=max(x[i],k);
	}
	cout << k;
	return 0;
}
