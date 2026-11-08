#include <bits/stdc++.h>
using namespace std;
int a[100000];
int b[10000];
int main() { 
	freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		b[a[i]]++;	
	}
	for(int i=1;i<=m;i++){
	cout<<b[i]<<" ";	
	}
	
	return 0;
		
}

