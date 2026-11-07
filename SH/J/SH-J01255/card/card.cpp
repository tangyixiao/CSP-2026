#include <bits/stdc++.h>
using namespace std;
int n, m;
int ns[100000006];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>> n >> m;
	for(int i = 0;i<=n;i++){
		cin >> ns[i];
	}
	for(int i = 0;i<=n;i++){
		cout << ns[i] << " ";
	}
	
}
