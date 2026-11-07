#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int a=0,a2;
	for(int i=1;i<=n;i++){
		a2=a;
		cin >> a;
		if(a==a2) continue;
		else if(i!=1){
			cout << i-1 << " ";
		}
	}
	cout << n;
	return 0;
}
