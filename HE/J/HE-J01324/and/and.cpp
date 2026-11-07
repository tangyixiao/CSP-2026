#include <bits/stdc++.h>
using namespace std;


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,o,max=0;
	cin >> n >> o;
	for(int i=1;i<=n;i++){
		cin >> m;
		if(m>max) max=m;
	}
	cout << m;
	return 0;
}
