#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	long long a[n+1];
	for(int i = 0;i <= n;i++){
		cin >> a[i];
	}
	int x=0,y=0,z=0,w=0;
	for(int i = 0;i <= 1;i++){
		for(int j = i;j <= m;j++){
			x=a[i];
			y=a[i+1];
			z=a[i] && a[i+1];
		}
		if(z>=w){
			w = z;
		}
	}
	cout << w;
	return 0;
}
