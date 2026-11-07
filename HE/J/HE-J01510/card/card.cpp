#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=2;i<=n;i++){
		cin >> a[n];
	}
	if(a[n]==3||a[n]==a[2]||a[n]==a[1]){
		cout << 3 << 2 << 1;
	}
	if(a[n]==1||a[n]==a[3]){
		cout << 1 << 3;
	}
	if(a[n]==2||a[n]==a[3]||a[n]==a[1]){
		cout << 2 << 3 << 1;
	}
	if(a[n]==2||a[n]==a[1]){
		cout << 2 << 1;
	}
	cout << a[m];
	return 0;
}
