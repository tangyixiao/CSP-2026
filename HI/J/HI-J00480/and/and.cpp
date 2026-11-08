#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int big = 1,er = 1;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(a[i] >= big){
			big = a[i];
		}else if(a[i] >= er){
			er = a[i];
		}
	}
	cout << er;
	
	
	
	
	
	
	return 0;
}
