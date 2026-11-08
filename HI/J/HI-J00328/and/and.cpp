#include<bits/stdc++.h>
using namespace std;

long long a[20000005], b[20000005];

int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	for(int i=1; i<=n; i++){
		cin >> a[i];
	} 
	
	sort(a+1,a+n+1);
	
	for(int i=n; i>0; i--){
		b[n-i] = a[i];
	} 
	
	int maxx = b[0];
	
	for(int i=0; i<m; i++){
		maxx = maxx&b[i];
	}
	
	cout << maxx;
	
	return 0;
}
