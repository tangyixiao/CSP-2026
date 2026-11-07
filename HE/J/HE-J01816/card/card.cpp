#include <bits/stdc++.h>
using namespace std;
void two(int x){
	int e[200005],f = 0;
	while(x > 0){
		e[f] = x % 2;
		x = x / 2;
		f++;
	}
	for (int i = f;i <= 0;i--){
			retrun e[i];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;
	cin >> a >> b;
	cout << two(a) && two(b);
}
