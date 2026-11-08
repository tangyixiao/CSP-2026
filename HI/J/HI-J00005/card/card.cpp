#include<bits/stdc++.h>
using namespace std;
long long m,n;
int k=1;
long long a[500001],b[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1 ; i<=n ; i++){
		cin >> a[i]; 
	}
	for(int i=1 ; i<=n ; i++){
		b[a[i]]++;
	}
	for(int i=1 ; i<=m ; i++){
		cout << b[i] << ' ';
	}
	return 0;
}


