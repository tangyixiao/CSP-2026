#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005],x=0;
	cin >> n >> m;
	int b=a[0]&a[1]
	while(n--){
		cin >> a[x];
		x++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(b<a[i]&a[j]){
			b=a[i]&a[j];
		    }
		}
	}
	cout << b;
	return 0;

}
